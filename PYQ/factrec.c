#include<stdio.h>
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    fact(n);
  int factr=fact(n);
    printf("%d",factr);
    return 0;
}