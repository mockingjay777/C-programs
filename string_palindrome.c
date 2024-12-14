#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("Enter string\n");
	scanf("%s",str);
	int length=strlen(str);
	char temp[length];
	int i=0;
	while(str[i]!='\0'){
		temp[length-i-1]=str[i];
		i++;	
	}
	int ans=strcmp(str,temp);
	if(ans==0){
		printf("String is a palindrome\n");
	}else{
		printf("String is not a palindrome\n");
	}
	return 0;
}
