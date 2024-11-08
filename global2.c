#include <stdio.h>

int every=100;

void increase(){
	every++;
}

int main(){
	printf("Global variable before increment: %d\n",every);
	increase();
	printf("Global variable after increment: %d\n",every);
	return 0;
}
