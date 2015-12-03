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
	double getPositionX();
	/**
	* ��ȡY��λ��
	*/
	double getPositionY();
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