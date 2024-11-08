#include <stdio.h>

int area(int l, int b);

int main(){
	int x,y;
	printf("Enter length and breadth of rectangle\n");
	scanf("%d%d",&x,&y);
	printf("Area of rectangle is %d\n",area(x,y));
	return 0;
}

int area(int l,int b){
	return l*b;
}
