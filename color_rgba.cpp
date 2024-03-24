#include "color_rgba.h"

void ColorRGBA::setRed(byte red)
{
	r = red;
}
void ColorRGBA::setGreen(byte green)
{
	g = green;
}
void ColorRGBA::setBlue(byte blue)
{
	b = blue;
}
void ColorRGBA::setAlpha(byte alpha)
{
	a = alpha;
}

byte ColorRGBA::getRed() const
{
	return r;
}
byte ColorRGBA::getBlue() const
{
	return b;
}
byte ColorRGBA::getGreen() const
{
	return g;
}
byte ColorRGBA::getAlpha() const
{
	return a;
}

string ColorRGBA::toString() const
{
	return "RGBA(" + to_string(r) + ", " + to_string(g) + ", " + to_string(b) + ", " + to_string(a)+')';
}

string ColorRGBA::toJson() const
{
	return "{\n\t\"r\": " + to_string(r) + ",\n\t\"g\": " + to_string(g) + ",\n\t\"b\": " + to_string(b) + ",\n\t\"a\": " + to_string(a) + "\n  }";
}

ColorRGBA::ColorRGBA()
{
	b = 0;
	r = 0;
	g = 0;
	a = 255;
}

ColorRGBA::ColorRGBA(byte red, byte green, byte blue, byte alpha)
{
	r = red;
	g = green;
	b = blue;
	a = alpha;
}
ColorRGBA::~ColorRGBA()
{
	b = 0;
	r = 0;
	g = 0;
	a = 0;
}