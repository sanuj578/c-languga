#include<stdio.h>
int  fa(int n){
if(n==1){
    return 1;
}
return n*fa(n-1);

}
int main(){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    fa(n);
    printf("%d",n*fa(n-1));
    printf("%d",(n*fa(n-1))/8);
    return 0;
}