#pragma once
#include"Objects.h"
#include "cocos2d.h"
#include "Rock.h"
#include<list>
#include<vector>
using namespace std;
USING_NS_CC;
class SpaceShooters : public Objects
{
private:
	list< Objects* > m_bullets;
public:
	SpaceShooters();
	~SpaceShooters();
	void Init();
	void Update(float);
	void Shoot();
	void Collision(vector <Rock*> );
};

