#include <stdio.h>

void increment(){
       	static int counter=0;
	counter++;
	printf("Counter: %d\n",counter);
}

int main(){
	increment();
	increment();
	increment();
	return 0;
}
