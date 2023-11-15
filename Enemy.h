#pragma once
#include <stdio.h>

class Enemy
{
public:
	void Update();
private:
	enum Phase {
		approach,
		fire,
		leave,
	};
private:
	 void Approach();
	 void Fire();
	 void Leave();
	 static void (Enemy::* phaseTable[])();
private:
	Phase phase_ = approach;
};

