#include<stdio.h>
int main(){
	int n,m,i,j;
		printf("enter the rows =");
	scanf("%d",&n);
	printf("enter the column =");
	scanf("%d",&m);
	int arr[n][m];
	int brr[n][m];
	int crr[i][j];
	printf(" matrix A= \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the elements %d*%d=",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	printf(" matrix B= \n ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the elements %d*%d=",i+1,j+1);
			scanf("%d",&brr[i][j]);
		}
	}
	printf("A matrix=\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",arr[i][j]);	
		}
			printf("\n");
		}
		printf("B matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",brr[i][j]);	
		}
			printf("\n");
		}
		
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		     crr[i][j]=arr[i][j]*brr[i][j];	
		}
			
		}
		printf("A*B=C\n");
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d  ",crr[i][j]);	
		}
			printf("\n");
		}
		
	return 0;
}
