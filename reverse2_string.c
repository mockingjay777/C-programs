#include <stdio.h>
int main(){
	char str[100];
	printf("Enter string\n");
	scanf("%s",str);
	int length=0,i=0;
	while(str[length]!='\0'){
		length++;
	}
	char temp[length];
	while(str[i]!='\0'){
		temp[length-i-1]=str[i];
		i++;
			
	}
	printf("Reversed string: %s\n",temp);
	return 0;
	
}
