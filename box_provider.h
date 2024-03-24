#ifndef BOX_PROVIDER_H
#define BOX_PROVIDER_H

#include "box.h"

struct BoxProvider
{
private:
	
public:
	Box* createBox(float height, float width, float depth, ColorRGBA* color, Material material)
	{
		return new Box(height, width, depth, color, material);
	}
	string BoxInfo(Box* box)
	{
		return box->toString();
	}
	string BoxJson(Box* box)
	{
		return box->toJson();
	}
	void deleteBox(Box* box)
	{
		delete box;
	}
};
#endif