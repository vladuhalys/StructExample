#include "box.h"

Box::Box()
{
	height = 0;
	width = 0;
	depth = 0;
	V = 0;
	color = nullptr;
	material = OTHER;
}

Box::Box(float height, float width, float depth, ColorRGBA* color, Material material)
{
	this->height = height;
	this->width = width;
	this->depth = depth;
	this->V = height * width * depth;
	this->color = color;
	this->material = material;
}

Box::~Box()
{
	height = 0;
	width = 0;
	depth = 0;
	V = 0;
	delete color;
	color = nullptr;
	material = OTHER;
}

void Box::setHeight(float h)
{
	height = h;
}

void Box::setWidth(float w)
{
	width = w;
}

void Box::setDepth(float d)
{
	depth = d;
}

void Box::setVolume(float v)
{
	V = v;
}

void Box::setColor(ColorRGBA* c)
{
	color = c;
}

void Box::setMaterial(Material m)
{
	material = m;
}

float Box::getHeight() const
{
	return height;
}

float Box::getWidth() const
{
	return width;
}

float Box::getDepth() const
{
	return depth;
}

float Box::getVolume() const
{
	return V;
}

ColorRGBA* Box::getColor() const
{
	return color;
}

Material Box::getMaterial() const
{
	return material;
}

string Box::materialToString(Material material)
{
	switch (material)
	{
	case WOOD:
		return "Wood";
	case METAL:
		return "Metal";
	case PLASTIC:
		return "Plastic";
	default:
		return "Unknown";
	}
}

string Box::toString()
{
	string result = "Box: " +'\n';
	result += "Height: " + to_string(height) + '\n';
	result += "Width: " + to_string(width) + '\n';
	result += "Depth: " + to_string(depth) + '\n';
	result += "Volume: " + to_string(V) + '\n';
	result += "Color: " + color->toString() + '\n';
	result += "Material: " + materialToString(material) + '\n';
	return result;
}

string Box::toJson()
{
	string result = "{\n";
	result += "  \"Height\": " + to_string(height) + ",\n";
	result += "  \"Width\": " + to_string(width) + ",\n";
	result += "  \"Depth\": " + to_string(depth) + ",\n";
	result += "  \"Volume\": " + to_string(V) + ",\n";
	result += "  \"Color\": " + color->toJson() + ",\n";
	result += "  \"Material\": \"" + materialToString(material) + "\"\n";
	result += "}\n";
	return result;
}

