#ifndef BOX_H
#define BOX_H

#include "color_rgba.h"

enum Material
{
	WOOD,
	PLASTIC,
	METAL,
	OTHER
};

struct Box
{
private:
	float height;
	float width;
	float depth;
	float V;
	ColorRGBA* color = nullptr;
	Material material;
	string materialToString(Material material);
public:
	Box();
	Box(float height, float width, float depth, ColorRGBA* color, Material material);

	~Box();

	void setHeight(float h);
	void setWidth(float w);
	void setDepth(float d);
	void setVolume(float v);
	void setColor(ColorRGBA* c);
	void setMaterial(Material m);
	float getHeight() const;
	float getWidth() const;
	float getDepth() const;
	float getVolume() const;
	ColorRGBA* getColor() const;
	Material getMaterial() const;

	string toString();
	string toJson();
};

#endif