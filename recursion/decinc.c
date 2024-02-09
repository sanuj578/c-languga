#include<stdio.h>
void decinc(int n){
    if(n==1){
        return 1;

    }
   // printf("%d\n",n);
    decinc(n-1);
   // printf("%d\n",n);
    return n-1;
}
int main(){
    int n ;
    printf("enrtr the number =");
    scanf("%d",&n) ;
    decinc(n);
    printf("%d\n",n);
     return 0;
}