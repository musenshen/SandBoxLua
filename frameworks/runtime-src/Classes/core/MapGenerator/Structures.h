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
	* ��ȡ����
	*/
	unsigned int getIndex();
	/**
	* ��ȡ��
	*/
	unsigned int getRow();
	/**
	* ��ȡ��
	*/
	unsigned int getCol();
	/**
	* ��ȡX��λ��
	*/
	cocos2d::Vec2 getPosition();
	/**
	* �����Ƿ�̲
	*/
	void setBorder(bool border);
	/**
	* �Ƿ�̲
	*/
	bool isBorder();
	/**
	* ���õ�������
	*/
	void setTerrain(Terrain terrain);
	/**
	* ��ȡ��������
	*/
	Terrain getTerrain();
	/**
	* ���õ�������
	*/
	void setTerrainIndex(unsigned int i);
	/**
	* ��ȡ��������
	*/
	unsigned int getTerrainIndex();
	/**
	* ������̬����
	*/
	void setBiome(Biome biome);
	/**
	* ��ȡ��̬����
	*/
	Biome getBiome();
	/**
	* ������̬����
	*/
	void setBiomeIndex(unsigned int i);
	/**
	* ��ȡ��̬����
	*/
	unsigned int getBiomeIndex();
	/**
	* ���ú���
	*/
	void setElevation(double elevation);
	/**
	* ��ȡ����
	*/
	double getElevation();
	/**
	* ��ȡCenter����
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