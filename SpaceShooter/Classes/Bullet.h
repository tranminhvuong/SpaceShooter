#pragma once
#include"Objects.h"
#include "cocos2d.h"

USING_NS_CC;

class Bullet:public Objects
{

public:
	Bullet();
	Bullet(Scene *);
	~Bullet();
	void Init();
	void Update(float);
};

