#include <stdio.h>
int main(){
	char str[100];
	printf("Enter string\n");
	fgets(str,100,stdin);
	int count=0,i=0;
	while(str[i]!='\0'){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			count++;
		}
		i++;
	}
	printf("Number of vowels: %d\n",count);
	return 0;
}
