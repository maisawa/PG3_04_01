#include<stdio.h>
#include"Enemy.h"

int main() {

	Enemy e;
	//---------------------------
	for (int i = 0; i < 3; i++) {
		e.Update();
	}
	//---------------------------
	return 0;
}