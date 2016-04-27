#pragma once
#include "DisplayableObject.h"
#include <string>
class Road :
	public DisplayableObject
{
public:
	Road(const std::string& filename);
	~Road();
	void Display();
	void setLength(int l);
private:
	void DrawRoad();
	int roadLength=1;
	GLint texID;
};
