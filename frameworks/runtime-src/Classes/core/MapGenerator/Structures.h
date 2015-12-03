#pragma once

#include <vector>
#include <list>

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
class Center
{
public:
	Center();
	Center(unsigned int i, unsigned int r, unsigned int c, double x, double y);
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
	double getPositionX();
	/**
	* 获取Y轴位置
	*/
	double getPositionY();
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
	//vector<Center*> getCenters();

private:
	unsigned int		_index;
	unsigned int		_row;
	unsigned int		_col;
	double				_posx;
	double				_posy;

	bool _border;
	Terrain _terrain;
	unsigned int  _terrainIndex;

	Biome _biome;
	unsigned int  _biomeIndex;

	double _elevation;

	vector<Center *>	_centers;
    
};

}