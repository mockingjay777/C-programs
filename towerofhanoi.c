#include <stdio.h>
void tower(int n, char src, char dest, char aux);

int main(){
	int n;
	printf("Enter number of disks\n");
	scanf("%d",&n);
	tower(n,'A','B','C');
	return 0;
}

void tower(int n, char src, char dest, char aux){
	if(n==1){
		printf("Move disk 1 from %c to %c\n",src,dest);
		return;
	}

	tower(n-1,src,aux,dest);

	printf("Move disk %d from %c to %c\n",n,src,dest);

	tower(n-1,aux,dest,src);
}
