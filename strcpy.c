#include <stdio.h>
#include <string.h>
int main(){
	char src[]="OpenAI";
	char dest[10];
	strcpy(dest,src);
	printf("Destination strin: %s\n",dest);
	return 0;
}
