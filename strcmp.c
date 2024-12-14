#include <stdio.h>
#include <string.h>

int main(){
	char str1[]="Hello_World";
	char str2[]="Hello, World!";
	int ans=strcmp(str1,str2);
	if(ans==0){
		printf("Equal");
	}
	else{
		printf("Not equal");
	}
	return 0;
}
