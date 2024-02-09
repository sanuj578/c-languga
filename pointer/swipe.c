#include<stdio.h>
int swip(int*a,int *b){
    a=a+b;
    b=a-b;
    a=a-b;
    return a,b;

}
int main(){
    int a,b;
    printf("enter the number =");
    scanf("%d",&a);
    printf("enter the number =");
    scanf("%d",&b);
    swip(&a,&b);
    printf("A is=%dB is=%d",a,b);
    return 0;
}