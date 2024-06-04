#include "Enemy.h"
#include <stdio.h>

void Enemy::approach()//接近
{
	printf("敵が接近\n\n");
	printf("1または2を入力してください。1を入力した場合、次へ進みます。\n");
	scanf_s("%d", &a);
	if (a == 1) {
		index++;
	}
}

void Enemy::shooting()//射撃
{
	printf("敵が射撃\n\n");
	printf("2を入力してください。2を入力した場合、次へ進みます。\n");
	scanf_s("%d", &b);
	if (b == 2) {
		index++;
	}
}

void Enemy::withdrawal()//離脱
{
	printf("敵が離脱");
	if (index == 1) {
		index++;
	}
}

void(Enemy::* Enemy::table[])() = {

&Enemy::approach,
&Enemy::shooting,
&Enemy::withdrawal,

};

void Enemy::Update()//アップデート(更新)
{
	(this->*table[index])();
}
