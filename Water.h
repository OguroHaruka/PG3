#pragma once
#include "Drink.h"
#include <stdio.h>

class Water:public Drink
{
public:
	void Pour() override;
};

