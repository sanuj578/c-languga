#include<stdio.h>
int main(){
	int input;
	float a , b,result;
	printf("calculater");
	printf("enter   1 for addision\n");
	printf("enter   2 for division\n");
	printf("enter   3 for multiplicaton\n");
	scanf("%d",&input);
	printf("enter the a number\n");
	scanf("%f",&a);
	printf("enter the b number\n");
	scanf("%f",&b);
	switch(input){
		case1 : result=a+b;
		printf("the addision%f\n",result);
		break;
		case2:result=a-b;
		printf("the division%f\n",result);
		break;
		case3:result=a*b;
		printf("the multiplication%f\n",result);
		break;
        default :
	 printf("worng information"); 
	}
}
