#include <stdio.h>

int gcd(int a,int b);

int main(){
	int x,y;
	printf("Enter numbers to find gcd\n");
	scanf("%d%d",&x,&y);

	printf("GCD of %d and %d is %d\n",x,y,gcd(x,y));
	return 0;
}

int gcd(int a,int b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
