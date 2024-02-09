#include<stdio.h>
//int swap(int*,int*);
 int swap(int*a,int*b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*b-*a;
     printf("After swap number value A=%dand B=%d",*a,*b);
    return*a,*b ;
}
int main(){
    int a=20;
    int b=10;
    printf("before  swap number value A=%dand B=%d\n",a,b);
    swap(&a,&b);
   //  printf("After swap number value A=%dand B=%d",*a,*b);
    return 0;
}
