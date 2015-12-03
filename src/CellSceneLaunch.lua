
--[[
@brief 显示初始化场景.
]]
local CellSceneLaunch = class("CellSceneLaunch")
CellSceneLaunch._cellSceneLaunch  = nil

function CellSceneLaunch:getInstance()
    if CellSceneLaunch._cellSceneLaunch == nil then
        CellSceneLaunch._cellSceneLaunch = CellSceneLaunch.new()
    end
    return CellSceneLaunch._cellSceneLaunch
end

-- 开始
function CellSceneLaunch:start()
    local scene = display.newScene("SceneLaunch")
    local layer = cc.Layer:create()
    scene:addChild(layer)

    local node = self:initScene()
    if node then
        layer:addChild(node)

        -- 切换到新场景
        display.replaceScene(scene)

        self:onRunThisSceneDone()
    else
        print(" CellSceneLaunch Fail ");
    end

end

function CellSceneLaunch:initScene()
    -- add in farm background
    local bg = cc.Sprite:create("Graphics/Tile/TileA1.png")
    if bg then
        local VisibleRect = require("VisibleRect") 
        bg:setPosition(VisibleRect:center())
    end
    
    return bg
end

function CellSceneLaunch:onRunThisSceneDone()
    print(" CellSceneLaunch Success ");
end

return CellSceneLaunch