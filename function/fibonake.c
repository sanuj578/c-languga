#include<stdio.h>
int fibo(int n){
    int i,frist =0,sceond =1 ,next;
    for(i=1;i<=n;i++){
        next=frist+sceond;
        frist =sceond;
        sceond=next;
        printf("%d  ",next);
    }
    return ;
}
int main(){
    int n;
    printf("enter the fibo time =");
    scanf("%d",&n);
    fibo(n);
    return 0;
}