#include "lua_MapGenerator_auto.hpp"
#include "Map.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_MapGenerator_Center_getIndex(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getIndex'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setTerrain(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setTerrain'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        maps::Terrain arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "maps.Center:setTerrain");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setTerrain'", nullptr);
            return 0;
        }
        cobj->setTerrain(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setTerrain",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setTerrain'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setBiomeIndex(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setBiomeIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "maps.Center:setBiomeIndex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setBiomeIndex'", nullptr);
            return 0;
        }
        cobj->setBiomeIndex(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setBiomeIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setBiomeIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setElevation(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setElevation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "maps.Center:setElevation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setElevation'", nullptr);
            return 0;
        }
        cobj->setElevation(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setElevation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setElevation'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setBiome(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setBiome'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        maps::Biome arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "maps.Center:setBiome");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setBiome'", nullptr);
            return 0;
        }
        cobj->setBiome(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setBiome",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setBiome'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getCenters(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getCenters'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getCenters'", nullptr);
            return 0;
        }
        cocos2d::Vector<maps::Center *> ret = cobj->getCenters();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getCenters",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getCenters'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getCol(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getCol'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getCol'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getCol();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getCol",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getCol'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setTerrainIndex(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setTerrainIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "maps.Center:setTerrainIndex");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setTerrainIndex'", nullptr);
            return 0;
        }
        cobj->setTerrainIndex(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setTerrainIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setTerrainIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getRow(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getRow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getRow'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getRow();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getRow",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getRow'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getTerrainIndex(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getTerrainIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getTerrainIndex'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getTerrainIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getTerrainIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getTerrainIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getBiomeIndex(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getBiomeIndex'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getBiomeIndex'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getBiomeIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getBiomeIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getBiomeIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_init(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        unsigned int arg0;
        unsigned int arg1;
        unsigned int arg2;
        cocos2d::Vec2 arg3;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "maps.Center:init");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "maps.Center:init");

        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "maps.Center:init");

        ok &= luaval_to_vec2(tolua_S, 5, &arg3, "maps.Center:init");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:init",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_init'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_setBorder(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_setBorder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "maps.Center:setBorder");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_setBorder'", nullptr);
            return 0;
        }
        cobj->setBorder(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:setBorder",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_setBorder'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getTerrain(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getTerrain'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getTerrain'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getTerrain();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getTerrain",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getTerrain'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getBiome(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getBiome'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getBiome'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getBiome();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getBiome",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getBiome'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_isBorder(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_isBorder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_isBorder'", nullptr);
            return 0;
        }
        bool ret = cobj->isBorder();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:isBorder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_isBorder'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getElevation(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getElevation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getElevation'", nullptr);
            return 0;
        }
        double ret = cobj->getElevation();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getElevation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getElevation'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_getPosition(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Center*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Center_getPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_getPosition'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:getPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_getPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Center_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"maps.Center",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        unsigned int arg0;
        unsigned int arg1;
        unsigned int arg2;
        cocos2d::Vec2 arg3;
        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "maps.Center:create");
        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "maps.Center:create");
        ok &= luaval_to_uint32(tolua_S, 4,&arg2, "maps.Center:create");
        ok &= luaval_to_vec2(tolua_S, 5, &arg3, "maps.Center:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_create'", nullptr);
            return 0;
        }
        maps::Center* ret = maps::Center::create(arg0, arg1, arg2, arg3);
        object_to_luaval<maps::Center>(tolua_S, "maps.Center",(maps::Center*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "maps.Center:create",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_create'.",&tolua_err);
#endif
    return 0;
}
int lua_MapGenerator_Center_constructor(lua_State* tolua_S)
{
    int argc = 0;
    maps::Center* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Center_constructor'", nullptr);
            return 0;
        }
        cobj = new maps::Center();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"maps.Center");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Center:Center",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Center_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_MapGenerator_Center_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Center)");
    return 0;
}

int lua_register_MapGenerator_Center(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"maps.Center");
    tolua_cclass(tolua_S,"Center","maps.Center","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"Center");
        tolua_function(tolua_S,"new",lua_MapGenerator_Center_constructor);
        tolua_function(tolua_S,"getIndex",lua_MapGenerator_Center_getIndex);
        tolua_function(tolua_S,"setTerrain",lua_MapGenerator_Center_setTerrain);
        tolua_function(tolua_S,"setBiomeIndex",lua_MapGenerator_Center_setBiomeIndex);
        tolua_function(tolua_S,"setElevation",lua_MapGenerator_Center_setElevation);
        tolua_function(tolua_S,"setBiome",lua_MapGenerator_Center_setBiome);
        tolua_function(tolua_S,"getCenters",lua_MapGenerator_Center_getCenters);
        tolua_function(tolua_S,"getCol",lua_MapGenerator_Center_getCol);
        tolua_function(tolua_S,"setTerrainIndex",lua_MapGenerator_Center_setTerrainIndex);
        tolua_function(tolua_S,"getRow",lua_MapGenerator_Center_getRow);
        tolua_function(tolua_S,"getTerrainIndex",lua_MapGenerator_Center_getTerrainIndex);
        tolua_function(tolua_S,"getBiomeIndex",lua_MapGenerator_Center_getBiomeIndex);
        tolua_function(tolua_S,"init",lua_MapGenerator_Center_init);
        tolua_function(tolua_S,"setBorder",lua_MapGenerator_Center_setBorder);
        tolua_function(tolua_S,"getTerrain",lua_MapGenerator_Center_getTerrain);
        tolua_function(tolua_S,"getBiome",lua_MapGenerator_Center_getBiome);
        tolua_function(tolua_S,"isBorder",lua_MapGenerator_Center_isBorder);
        tolua_function(tolua_S,"getElevation",lua_MapGenerator_Center_getElevation);
        tolua_function(tolua_S,"getPosition",lua_MapGenerator_Center_getPosition);
        tolua_function(tolua_S,"create", lua_MapGenerator_Center_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(maps::Center).name();
    g_luaType[typeName] = "maps.Center";
    g_typeCast["Center"] = "maps.Center";
    return 1;
}

int lua_MapGenerator_Map_GenerateTest(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Map",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Map*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Map_GenerateTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Map_GenerateTest'", nullptr);
            return 0;
        }
        cobj->GenerateTest();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Map:GenerateTest",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_GenerateTest'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Map_GeneratePolygons(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Map",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Map*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Map_GeneratePolygons'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Map_GeneratePolygons'", nullptr);
            return 0;
        }
        cobj->GeneratePolygons();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Map:GeneratePolygons",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_GeneratePolygons'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Map_GetCenters(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Map",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Map*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Map_GetCenters'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Map_GetCenters'", nullptr);
            return 0;
        }
        cocos2d::Vector<maps::Center *> ret = cobj->GetCenters();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Map:GetCenters",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_GetCenters'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Map_GenerateLand(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Map",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Map*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Map_GenerateLand'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Map_GenerateLand'", nullptr);
            return 0;
        }
        cobj->GenerateLand();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Map:GenerateLand",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_GenerateLand'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Map_Generate(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"maps.Map",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (maps::Map*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_MapGenerator_Map_Generate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_MapGenerator_Map_Generate'", nullptr);
            return 0;
        }
        cobj->Generate();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "maps.Map:Generate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_Generate'.",&tolua_err);
#endif

    return 0;
}
int lua_MapGenerator_Map_constructor(lua_State* tolua_S)
{
    int argc = 0;
    maps::Map* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 4) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "maps.Map:Map");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "maps.Map:Map");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "maps.Map:Map");

            if (!ok) { break; }
            std::string arg3;
            ok &= luaval_to_std_string(tolua_S, 5,&arg3, "maps.Map:Map");

            if (!ok) { break; }
            cobj = new maps::Map(arg0, arg1, arg2, arg3);
            tolua_pushusertype(tolua_S,(void*)cobj,"maps.Map");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj = new maps::Map();
            tolua_pushusertype(tolua_S,(void*)cobj,"maps.Map");
            tolua_register_gc(tolua_S,lua_gettop(tolua_S));
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "maps.Map:Map",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_MapGenerator_Map_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_MapGenerator_Map_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Map)");
    return 0;
}

int lua_register_MapGenerator_Map(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"maps.Map");
    tolua_cclass(tolua_S,"Map","maps.Map","",nullptr);

    tolua_beginmodule(tolua_S,"Map");
        tolua_function(tolua_S,"new",lua_MapGenerator_Map_constructor);
        tolua_function(tolua_S,"GenerateTest",lua_MapGenerator_Map_GenerateTest);
        tolua_function(tolua_S,"GeneratePolygons",lua_MapGenerator_Map_GeneratePolygons);
        tolua_function(tolua_S,"GetCenters",lua_MapGenerator_Map_GetCenters);
        tolua_function(tolua_S,"GenerateLand",lua_MapGenerator_Map_GenerateLand);
        tolua_function(tolua_S,"Generate",lua_MapGenerator_Map_Generate);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(maps::Map).name();
    g_luaType[typeName] = "maps.Map";
    g_typeCast["Map"] = "maps.Map";
    return 1;
}
TOLUA_API int register_all_MapGenerator(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"maps",0);
	tolua_beginmodule(tolua_S,"maps");

	lua_register_MapGenerator_Map(tolua_S);
	lua_register_MapGenerator_Center(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

