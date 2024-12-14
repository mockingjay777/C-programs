#include <stdio.h>

int power(int x, int n){
	if(n==0){
		return 1;
	}else{
		return x*power(x, n-1);
	}
}

int main(){
	int a,b;
	printf("Enter base and exponent\n");
	scanf("%d%d",&a,&b);
	printf("%d to the power %d is %d\n",a,b,power(a,b));
	return 0;
}
