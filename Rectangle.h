#pragma once
#include "IShape.h"
#include <stdio.h>

class Rectangle:public IShape
{
public:
	void Size()override;

	void Draw()override;
private:
	float x = 5.0f;
	float y = 10.0f;
	float z;
};

