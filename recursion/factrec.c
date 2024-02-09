#include<stdio.h>
int fa(int n ){
   // int i, fact =1;
   // for (i=1;i<=n;i++){
   //     fact =fact*i;
   // }
   if(n==1) return 1;
    return n*fa(n-1);
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    int fact =fa(n);
    printf("%d",fact);
    return 0;
}