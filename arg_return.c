#include <stdio.h>
int multiply(int a,int b);

int main(){
	int x=5,y=10;
	int ans=multiply(x,10);
	printf("Final value of %d x %d is %d\n",x,y,ans);
	return 0;
}

int multiply(int a,int b){
        int product=a*b;
	return product;
}
