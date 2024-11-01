#include <stdio.h>
int main(){
	char str1[100];
	char str2[100];
	printf("Enter first string\n");
	fgets(str1,100,stdin);
	printf("Enter second string\n");
	fgets(str2,100,stdin);
	int i=0,result=0;
	while(str1[i]!='\0'||str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			result=1;		
			break;
		}
		i++;
	}
	if(result==0){
		printf("Equal\n");
	}else{
		printf("Not equal\n");
	}
	return 0;
}
