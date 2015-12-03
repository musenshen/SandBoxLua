
-----------------------------------------------------
--@brief GameController主游戏控制
------------------------------------------------------
local GameController = class("GameController")
GameController._gameController  = nil
GameController._schedulerBackEntry = nil

function GameController:getInstance()
    if GameController._gameController == nil then
        GameController._gameController = GameController.new()
    end
    return GameController._gameController
end

-- 开始
function GameController:start()
    local CellSceneLaunch = require("CellSceneLaunch")
    --pcall(CellSceneLaunch.start, CellSceneLaunch:getInstance())
    CellSceneLaunch:getInstance():start()

    local scheduler = cc.Director:getInstance():getScheduler()
    self._schedulerBackEntry = scheduler:scheduleScriptFunc(GameController.onSceneLaunchSuccess, 1.5, false)
end

--传递成功跳转监听
function GameController.onSceneLaunchSuccess()

end

return GameController