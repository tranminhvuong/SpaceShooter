#pragma once
#include "cocos2d.h"

USING_NS_CC;
class Objects
{
protected:
	Sprite *m_sprite;
public:
	Objects();
	~Objects();
	Objects(Scene *);
	virtual void Update(float ) = 0;
	virtual void Init() = 0;
};

