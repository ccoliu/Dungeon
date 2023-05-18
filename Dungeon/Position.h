#pragma once

class Position
{
public:
	int x, y;
	Position() : x(0), y(0) {};
	Position(int xcoor, int ycoor) : x(xcoor), y(ycoor) {};
	Position getPos() const { return Position(x, y); };
	void setPos(int xcoor, int ycoor) { x = xcoor; y = ycoor; };
};