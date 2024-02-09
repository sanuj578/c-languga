#include<stdio.h>
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;

    }
    else{
      // fibo(n-1)+fibo(n-2);
     
    return fibo(n-1)+fibo(n-2);   
    }

}
void fiboprint(int n){
   int i;
    for (i=1;i<=n;i++){
        printf("%d   ",fibo(i));
    }
}
int main(){
    int n;
    printf("enter the number of term =");
    scanf("%d",&n);
    fibo(n);
    fiboprint(n);
   int result=fibo(n-1)+fibo(n-2);

    return 0;
}
