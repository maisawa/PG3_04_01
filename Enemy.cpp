#include "Enemy.h"
#include <stdio.h>

void Enemy::approach()//�ڋ�
{
	printf("�G���ڋ�\n\n");
	printf("1�܂���2����͂��Ă��������B1����͂����ꍇ�A���֐i�݂܂��B\n");
	scanf_s("%d", &a);
	if (a == 1) {
		index++;
	}
}

void Enemy::shooting()//�ˌ�
{
	printf("�G���ˌ�\n\n");
	printf("2����͂��Ă��������B2����͂����ꍇ�A���֐i�݂܂��B\n");
	scanf_s("%d", &b);
	if (b == 2) {
		index++;
	}
}

void Enemy::withdrawal()//���E
{
	printf("�G�����E");
	if (index == 1) {
		index++;
	}
}

void(Enemy::* Enemy::table[])() = {

&Enemy::approach,
&Enemy::shooting,
&Enemy::withdrawal,

};

void Enemy::Update()//�A�b�v�f�[�g(�X�V)
{
	(this->*table[index])();
}
