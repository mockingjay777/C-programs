#include <stdio.h>
#include "extern1f1.c"
extern int global;

int main(){
	printf("Global variable in main: %d\n",global);
	return 0;
}
