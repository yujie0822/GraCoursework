#pragma once
#include "DisplayableObject.h"
class StreetLight :
	public DisplayableObject
{
public:
	StreetLight();
	~StreetLight();
	void Display();
private:
	void DrawLight();
};

