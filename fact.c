#include <stdio.h>

int factorial(int n){
	if (n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main(){
	int i;
	printf("Enter number for factorial\n");
	scanf("%d",&i);
	printf("Factorial of %d= %d\n",i,factorial(i));
	return 0;
}
