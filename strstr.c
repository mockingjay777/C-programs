#include <stdio.h>
#include <string.h>
int main(){
	char str[100],sr[100];
	printf("Enter main string\n");
	fgets(str,100,stdin);
	printf("Enter substring to search\n");
	fgets(sr,100,stdin);
	
	if(strstr(str,sr)!=NULL){
		printf("Substring is not present in main string\n");
	}else{
		printf("Substring is present in main string\n");
	}
	return 0;
}
