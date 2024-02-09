#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
int factorial(int n){
	int f;
	if(n==1){
		return 1;
	}
	else{
		f=n*factorial(n-1);
		printf("factorial of number %d",f);
		return f;
}
	
}
