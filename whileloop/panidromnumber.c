#include<stdio.h>
int main (){
    int n,z,x;
    int r=0; 
    printf("enter the num ");
    scanf("%d",&n);
    while(n!=0){
         z=n%10;
         r=r*10+z;
        n=n/10;
        r==x;
    }
    printf("%d\n",r);
    if(x==n){
        printf("panidrom number");
    }
    else{
        printf("\nnot panidrom number ");
    }
    return 0;
}