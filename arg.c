#include <stdio.h>

void add(int a,int b);

int main(){
	int x=5,y=10;
	add(x,y);
	return 0;
}

void add(int a,int b){
	int ans=a+b;
	printf("%d + %d = %d \n",a,b,ans);
	return;
}
