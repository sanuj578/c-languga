#include<stdio.h>
int main(){
    int n;
     int frist =0,sceond =1 ,next;
    printf("enter the fibo time =");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        next=frist+sceond;
        frist =sceond;
        sceond=next;
        printf("%d  ",next);
    }
    return 0;
}