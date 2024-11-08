#include <stdio.h>

void area(float r);

int main(){
	float x;
	printf("Enter radius\n");
	scanf("%f",&x);
	area(x);
	return 0;
}

void area(float r){
	float area=3.14*r*r;
	printf("Area of circle: %.2f\n",area);
}

