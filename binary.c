#include <stdio.h>

int binary(int arr[], int left, int right, int target);

int main(){
	int arr[]={2,4,6,8,10,12,14,16,18};
	int size=sizeof(arr)/sizeof(arr[0]);
	int target;

	printf("Enter number to search\n");
	scanf("%d",&target);

	int result=binary(arr,0,size-1,target);

	if(result!=-1){
		printf("Element found at index %d\n",result);
	}else{
		printf("Element not found in array\n");
	}
	return 0;
}

int binary(int arr[], int left, int right, int target){
	if(left>right){
		return -1;
	}

	int mid=left+(right-left)/2;

	if(arr[mid]==target){
		return mid;
	}

	if(arr[mid]>target){
		return binary(arr,left,mid-1,target);
	}else{
		return binary(arr,mid+1,right,target);
	}
}


