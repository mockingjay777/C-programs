#include <stdio.h>

int random();

int main(){
	//int num=random();
	printf("Random number generated: %d\n",random());
	return 0;
}

int random(){
	return 42;
}
