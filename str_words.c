#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[100];
	printf("Enter string\n");
	fgets(str,100,stdin);
	int i=0, count=0;
	while(str[i]!='\0'){
		if(isspace(str[i])){
			count++;
		}
		i++;
	}
	printf("Number of words is %d\n",count);
	return 0;
}
