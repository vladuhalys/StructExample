#include <iostream>
#include <string>
using namespace std;

#ifndef COLOR_RGBA_H
#define COLOR_RGBA_H

typedef unsigned char byte;

struct ColorRGBA
{
private:
	byte r;
	byte g;
	byte b;
	byte a;
public:
	ColorRGBA();
	ColorRGBA(byte red, byte green, byte blue, byte alpha);

	~ColorRGBA();

	void setRed(byte red);
	void setGreen(byte green);
	void setBlue(byte blue);
	void setAlpha(byte alpha);

	/// <summary>
	/// Getter for the red has a return type of byte as unsigned char(0-255)
	/// </summary>
	byte getRed() const;
	/// <summary>
	/// Getter for the blue has a return type of byte as unsigned char(0-255)
	/// </summary>
	byte getBlue() const;
	/// <summary>
	/// Getter for the green has a return type of byte as unsigned char(0-255)
	/// </summary>
	byte getGreen() const;
	/// <summary>
	/// Getter for the alpha has a return type of byte as unsigned char(0-255)
	/// </summary>
	byte getAlpha() const;

	string toString() const;
	string toJson() const;
}; 

#endif