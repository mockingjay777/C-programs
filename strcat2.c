#include <stdio.h>
int main(){
	char str1[100];
	char str2[100];
	printf("Enter first string\n");
	fgets(str1,100,stdin);
	printf("Enter second string\n");
	fgets(str2,100,stdin);
	int i=0,j=0;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}

	
	printf("Final concatenated string: %s",str1);
	return 0;
}
