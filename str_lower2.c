#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char str1[100];
        printf("Enter string\n");
        fgets(str1,100,stdin);
	int length=0;
	length=strlen(str1);
        for(int i=0; i<=length; i++){
                str1[i]=tolower(str1[i]);
	}
        printf("String in lowercase: %s\n",str1);
        return 0;
}
