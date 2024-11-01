#include <stdio.h>
int main(){
	char src[100];
	char dest[100];
	printf("Enter string\n");
	fgets(src,100,stdin);
	int i=0;
	while(src[i]!='\0'){
		i++;
	}
	for(int j=0; j<=i; j++){
		dest[j]=src[j];
	}
	printf("Destination string: %s\n",dest);
	return 0;
}
