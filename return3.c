#include <stdio.h>
#include <stdlib.h>

int gen_random(){
	return rand()%100;
}

int main(){
	printf("Random number generated: %d\n",gen_random());
	return 0;
}
