#pragma once
#include "DisplayableObject.h"
#include "Animation.h"
#include "Input.h"

#include <string>

class Bird :
	public DisplayableObject,
	public Animation,
	public Input
{
public:
	Bird(const float& width, const float& height, const std::string& filename);
	~Bird();
	void Display();
	void Update(const double& deltaTime);
private:

	int texID;

	float width, height;

	float texCoords[8];
	int spriteWidth;
	int spriteFrame;
	bool runAnimate;
	double time;

	float dx;
};

