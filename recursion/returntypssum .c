#include<stdio.h>
void sum(int n){
    if(n==0){
       // printf("%d",x);
        return 1 ;
    }
  int x= n+sum(n-1);
    return ;

}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d"&n);
    sum(n);
      printf("%d",x);
    return 0;
}