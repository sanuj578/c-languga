#include<stdio.h>
int gcd(int a,int b){
while (b!=0){
    int temp=b;
    b=a%b;
    a=temp;
}
   printf("%d",a);
    return ;
}

int main(){
    int n,m;
    printf("enter the number= ");
    scanf("%d",&n);
    printf("enter the number =");
    scanf("%d",&m);
    gcd(n,m);
    return 0;

}