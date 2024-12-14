#include <stdio.h>
int main(){
	char str[20];
	printf("Enter string \n");
	fgets(str,20,stdin);
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("Lenght of string: %d\n",i);
	return 0;
}
