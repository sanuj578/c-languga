#include<stdio.h>
int main()
{
int array[10],i,sum;
float avg;
printf("enter the elements");
for(i=0;i<10;i++)
{
scanf("%d", array[i]);	
}
sum=0;
for(i=0;i<10;i++){
	sum=sum+array[i];
}
avg=sum/10;
printf("display the avg %d",avg);
return 0;
}
	


