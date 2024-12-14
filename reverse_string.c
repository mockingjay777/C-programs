#include <stdio.h>
#include <string.h>

int main(){
	char str[]="Hello World";
	int length=strlen(str);
	char temp[length];
	int i=0;
	while(str[i]!='\0'){
		temp[length-i-1]=str[i];
		i++;	
	}
	printf("Reversed string: %s\n",temp);
	return 0;
	
}
