#include<stdio.h>
int main(){
	int n;
	printf("enter the number =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter the %d number =",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}	
	printf("\n");
	int max= arr[0];
		
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
		printf("the num is largest %d  " ,max);
	return 0;
}