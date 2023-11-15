#include "Enemy.h"

void(Enemy::* Enemy::phaseTable[])() = {
&Enemy::Approach,
&Enemy::Fire,
&Enemy::Leave
};

void Enemy::Update()
{
	(this->*Enemy::phaseTable[phase_])();
	static_cast<size_t>(phase_);
}

void Enemy::Approach()
{
	printf("Ú‹ß\n");
	phase_ = Phase::fire;
}

void Enemy::Fire()
{
	printf("ËŒ‚\n");
	phase_ = Phase::leave;
}

void Enemy::Leave()
{
	printf("—£’E\n");
}



