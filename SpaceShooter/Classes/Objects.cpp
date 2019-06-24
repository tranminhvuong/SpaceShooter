#include "Objects.h"



Objects::Objects()
{
}
Objects::Objects(Scene *a)
{
	a->addChild(m_sprite);
}

Objects::~Objects()
{
}
