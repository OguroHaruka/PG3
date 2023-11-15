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
	printf("�ڋ�\n");
	phase_ = Phase::fire;
}

void Enemy::Fire()
{
	printf("�ˌ�\n");
	phase_ = Phase::leave;
}

void Enemy::Leave()
{
	printf("���E\n");
}



