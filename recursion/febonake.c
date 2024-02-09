#include<stdio.h>
int fibo(int n){
    if(n==1){

        return 1;
    }
    else{
    int ans1=fibo(n-1);
    int ans2 = fibo (n-2);
    int ans =ans1+ans2;
    printf("%d",ans);
    return ;
    }
}
int main (){
    int n;
    printf("enter the number = ");
    scanf("%d",&n);
    fibo(n);
    
    return 0;
}