maps = maps or {}

--lua地图渲染
local MapRender = class("MapRender", function()
    return display.newNode()
end) 

MapRender._renderTexture = nil


local WIDTH = 12288
local HEIGHT = 12288
local MAX_TEX_X = 3
local MAX_TEX_Y = 3


local TERRAIN_TEXTURE = {
    cc.rect(16, 336, 32, 32),          -- Snow
    cc.rect(208, 144, 32, 32),         -- Plain
    cc.rect(208, 48, 32, 32),          -- Grassland
    cc.rect(272, 144, 32, 32),         -- Swamp
    cc.rect(144, 144, 32, 32),         -- Mountain
    cc.rect(208, 240, 32, 32),         -- Desert
    cc.rect(336, 144, 32, 32),         -- Ocean
    cc.rect(336, 48, 32, 32),          -- Lake
    cc.rect(16, 240, 32, 32)           -- Beach
}


function MapRender.createMapNode(fileImage)
    local node = MapRender.new()
    if node then
        node:initMapNode(fileImage)
    end

    return node;
end

-- 构造函数
function MapRender:ctor()
    self._renderTexture = {} -- 用一个 table 来记录所有的按钮
    for i = 1, MAX_TEX_X do
        self._renderTexture[i] = {}
    end
end

--[[
        牌型检测过滤，返回true表示合法牌型
]]
function MapRender:initMapNode(fileImage)
    self:setContentSize(cc.size(WIDTH, HEIGHT))
    self:initRenderTexture()
    
    local pre = os.clock()
    local now = pre

    print("Map Generate: ")

    local mapa = maps.Map:new(WIDTH, HEIGHT, 10, "")
    mapa:GenerateTest()

    now = os.clock()
    print("%ld ms.", now - pre)
    pre = now

    self:doRenderTexture(mapa, fileImage)
    
    return true
end

function MapRender:initRenderTexture()

    -- create a render texture, this is what we are going to draw into
    local perWidth = WIDTH / MAX_TEX_X
    local perHeight = HEIGHT / MAX_TEX_Y
    for i=1, MAX_TEX_X do
        for j=1, MAX_TEX_Y do
            local renderTexture = cc.RenderTexture:create(perWidth, perHeight, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888)
            renderTexture:setPosition(cc.p(perWidth / 2 + (i-1) * perWidth, perHeight / 2 + (j-1) * perHeight))

            self:addChild(renderTexture)
            self._renderTexture[i][j] = renderTexture
        end
    end

    return true;
end


function MapRender:doRenderTexture(mapa, fileImage)
    local centers = mapa:GetCenters()
    local perWidth = WIDTH / MAX_TEX_X
    local perHeight = HEIGHT / MAX_TEX_Y

    local unitCenters = {}
    for i = 1, MAX_TEX_X do
        unitCenters[i] = {}
        for j = 1, MAX_TEX_Y do
            unitCenters[i][j] = {}
        end
    end
    for key, center in pairs(centers) do
        local x = math.floor(center:getRow() * maps.TILE_SIZE / perWidth) + 1
        local y = math.floor(center:getCol() * maps.TILE_SIZE / perHeight) + 1
        table.insert(unitCenters[x][y], center)
    end

    for i = 1, MAX_TEX_X do
        for j = 1, MAX_TEX_Y do
            local render = self._renderTexture[i][j]
            -- begin drawing to the render texture
            render:begin()

            local curCenters = unitCenters[i][j];
            for key, center in pairs(curCenters) do
                local tile = cc.Sprite:create(fileImage, TERRAIN_TEXTURE[center:getTerrain()+1])

                tile:setPosition(cc.p(center:getPosition().x - (i-1) * perWidth, center:getPosition().y - (j-1) * perHeight))
                tile:setAnchorPoint(cc.p(0,0))

                tile:visit()
            end

            -- finish drawing and return context back to the screen
            render:endToLua()
        end
    end

    return true;
end


maps.MapRender = MapRender