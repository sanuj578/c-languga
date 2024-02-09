#include<stdio.h>
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    int i;
    int lastdigit=1,fact=0;
    for (i=1;i<=n;i++){
     lastdigit=n%10;
     fact=fact*10+lastdigit;
     n=n/10;
    }
    printf("%d",fact);
    return 0;
}