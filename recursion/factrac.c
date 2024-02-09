#include<stdio.h>
int factorial(int n ){
    int i, fact =1;
    for (i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    int fact =factorial(n);
    printf("%d",fact);
    return 0;
}