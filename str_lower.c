#include <stdio.h>
int main(){
	char str1[100];
	printf("Enter string\n");
	fgets(str1,100,stdin);
	int length=0;
	while(str1[length]!='\0'){
		length++;
	}
	char lower[length];
	for(int i=0; i<=length; i++){
		if((str1[i]>='A')&&(str1[i]<='Z')){
			lower[i]=str1[i]+32;
		}else{
			lower[i]=str1[i];
		}
	}	
	printf("String in lowercase: %s\n",lower);
	return 0;
}
