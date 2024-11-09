#include <stdio.h>

int sum(int n){
	if(n==0){
		return 0;
	}else{
		return n+sum(n-1);
	}
}

int main(){
	int i;
	printf("Enter number for sum of natural numbers\n");
	scanf("%d",&i);
	printf("Sum of %d natural numbers is %d\n",i,sum(i));
	return 0;
}
