#include <stdio.h>
int main(){
	char str[100];
	printf("Enter string\n");
	fgets(str,100,stdin);
	int length=0,i=0,result=0;
	while(str[length]!='\0'){
		length++;
	}
	char temp[length];
	while(str[i]!='\0'){
		temp[length-i-1]=str[i];
		i++;		
	}

	for(i=0; i<length/2; i++){
		if(str[i]!=str[length-i-1]){
			result=1;
			printf("String is not a palindrome\n");
			break;
		}
	}if(result==0){
		printf("String is a palindrome\n");
	}
	return 0;
}
