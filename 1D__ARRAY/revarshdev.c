#include<stdio.h>
int main(){
	int n,i;
	printf("enter the number =");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the %d number =",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}	
	printf("\n");
	printf("revarsh number :");
	for(i=n-1;i>=0;i--){
		printf("%d  " ,arr[i]);
	}
	return 0;
}