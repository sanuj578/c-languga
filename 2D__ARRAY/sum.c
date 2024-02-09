#include<stdio.h>
int main()
{
	int n;
	printf("enter the size");
	scanf("%d",&n);
	int a[n],i,sum;
	float avg;
	printf("enter the number");
	for(i=0;i<n;i++)
	{ 
	scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++){
	sum=sum+a[i];
}
	avg=sum/n;
	

		printf("display the average%f",avg);
	return 0;
}

