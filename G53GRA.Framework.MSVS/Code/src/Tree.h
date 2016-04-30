#pragma once
#define _USE_MATH_DEFINES
#include "DisplayableObject.h"
#include <cmath>
#include <string>
#include <vector>

using namespace std;
class Tree :
	public DisplayableObject
{
public:
	Tree(const std::string& filename);
	~Tree();
	void Display();
	void addReplaceString(char flag, string str);
	void setReplaceString(char flag, string str);
	void Tree::getSequence();
private:
	void branch();                          // draw branch function
	int iter = 2;
	string init = "f";
	vector<string> change;
	vector<char> flags;
	bool toTexture = false;     // Flag to check if texture loaded correctly
	GLuint texID;               // Store a copy of the loaded texture binding id
	string sequence = "ff-[-& f + ff + < + f] + [+>f--f&-f]";
	float angle = 22.5f;
};

