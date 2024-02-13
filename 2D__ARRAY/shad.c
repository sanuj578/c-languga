#include<stdio.h>
int main()
{
int array[10],i,sum;
float avg;
for(i=0;i<10;i++)
{
	printf("enter the elements=");
scanf("%d",& array[i]);	
}
sum=0;
for(i=0;i<10;i++){
	sum=sum+array[i];
}
avg=sum/10;
printf("sum%ddisplay the avg %f",sum,avg);
return 0;
}
	


