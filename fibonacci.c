#include <stdio.h>

int fibonacci(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
		
	}
}

int main(){
	int a;
	printf("Enter number of terms of fibonacci series\n");
	scanf("%d",&a);
	printf("Series: %d\n",fibonacci(a));
	return 0;
}

