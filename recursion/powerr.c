#include<stdio.h>
void power (int n,int m){
if(m==0){
    return 1;
}
else{
int c=n*power (n,m-1);
   printf("%d",c);
   return ;
}
}
int main(){
    int n;
    printf("enter the number =");
    scanf("%d",&n);
     int m;
    printf("enter the power =");
    scanf("%d",&m);
   power(n,m);
    
 //  printf("%d",c);
     
    return 0;
}