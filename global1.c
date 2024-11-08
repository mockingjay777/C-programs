#include <stdio.h>

int everywhere=100;

void example(){
	printf("Global variable inside function: %d\n",everywhere);
}

int main(){
	printf("Global variable inside main: %d\n",everywhere);
	example();
	return 0;
}

