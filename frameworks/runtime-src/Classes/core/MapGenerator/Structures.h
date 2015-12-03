#ifndef _MAPS_STRUCTURES_H_
#define _MAPS_STRUCTURES_H_

#include <vector>
#include <list>
#include <string>
#include "cocos2d.h"

using namespace std;

namespace maps {

enum class Terrain{
	Snow,
	Plain,
	Grassland,
	Swamp,
	Mountain,
	Desert,
	Ocean,
	Lake,
	Beach,

	Size,
	None
};
    

enum class Biome{
	Tree,
	Bush,
	Bridge,
	House,

	Size,
	None
};



// Center of Voronoi cell; Corner of Delaunay triangle
class Center : public cocos2d::Ref
{
public:
	static Center* create(unsigned int i, unsigned int r, unsigned int c, cocos2d::Vec2 position);

public:
	bool init(unsigned int i, unsigned int r, unsigned int c, cocos2d::Vec2 position);

public:
	Center();
	virtual ~Center();

public:
	/**
	* 获取索引
	*/
	unsigned int getIndex();
	/**
	* 获取行
	*/
	unsigned int getRow();
	/**
	* 获取列
	*/
	unsigned int getCol();
	/**
	* 获取X轴位置
	*/
	cocos2d::Vec2 getPosition();
	/**
	* 设置是否海滩
	*/
	void setBorder(bool border);
	/**
	* 是否海滩
	*/
	bool isBorder();
	/**
	* 设置地形类型
	*/
	void setTerrain(Terrain terrain);
	/**
	* 获取地形类型
	*/
	Terrain getTerrain();
	/**
	* 设置地形索引
	*/
	void setTerrainIndex(unsigned int i);
	/**
	* 获取地形索引
	*/
	unsigned int getTerrainIndex();
	/**
	* 设置生态类型
	*/
	void setBiome(Biome biome);
	/**
	* 获取生态类型
	*/
	Biome getBiome();
	/**
	* 设置生态索引
	*/
	void setBiomeIndex(unsigned int i);
	/**
	* 获取生态索引
	*/
	unsigned int getBiomeIndex();
	/**
	* 设置海拔
	*/
	void setElevation(double elevation);
	/**
	* 获取海拔
	*/
	double getElevation();
	/**
	* 获取Center容器
	*/
	cocos2d::Vector<Center*> getCenters();

private:
	unsigned int		_index;
	unsigned int		_row;
	unsigned int		_col;
	cocos2d::Vec2       _position;

	bool _border;
	Terrain _terrain;
	unsigned int  _terrainIndex;

	Biome _biome;
	unsigned int  _biomeIndex;

	double _elevation;

	cocos2d::Vector<Center *>	_centers;
    
};

}

#endif