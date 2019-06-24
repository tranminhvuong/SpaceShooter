#pragma once
#include"Objects.h"
#include "cocos2d.h"

USING_NS_CC;
class Rock : public Objects
{
public:
	Rock();
	~Rock();
	void Init();
	void Update(float);
};

