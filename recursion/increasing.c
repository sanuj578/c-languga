#include<stdio.h>
void incareasing(int n){
    if(n==0){
        return ;
    }
  
    incareasing(n-1);
     printf("%d\n",n);
    return ;
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    incareasing(n);
    return 0;
}