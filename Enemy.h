#pragma once
class Enemy {
public://メンバ関数

	void approach();//接近
	void shooting();//射撃
	void withdrawal();//離脱

	static void(Enemy::* table[])();

	void Update();//アップデート(更新)

private://メンバ変数

	int index = 0;
	int a = 0;//入力用の変数名その１
	int b = 0;//入力用の変数名その２

};