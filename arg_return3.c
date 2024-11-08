#include <stdio.h>

int even(int a);

int main(){
	int x;
	printf("Enter number to check\n");
	scanf("%d",&x);
	int result=even(x);	
	if (result){
		printf("Number is even\n");
	}else{
		printf("Number is odd\n");
	}
	return 0;
}

int even(int a){
	return a%2==0;
}
