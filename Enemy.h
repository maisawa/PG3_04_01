#pragma once
class Enemy {
public://�����o�֐�

	void approach();//�ڋ�
	void shooting();//�ˌ�
	void withdrawal();//���E

	static void(Enemy::* table[])();

	void Update();//�A�b�v�f�[�g(�X�V)

private://�����o�ϐ�

	int index = 0;
	int a = 0;//���͗p�̕ϐ������̂P
	int b = 0;//���͗p�̕ϐ������̂Q

};