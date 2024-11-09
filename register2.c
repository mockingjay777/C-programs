#include <stdio.h>
void fast(){
	register int i=5;
	printf("Accessed quickly: %d\n",i);
}

int main(){
	fast();
	return 0;
}
