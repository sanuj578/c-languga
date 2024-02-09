#include<stdio.h>
void fact(int x){
    int i;
    int fact =1;
    for (i=1;i<=x;i++){
        fact =fact*i;
    }
    return ;
}
int main(){
    
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    fact(n);
    printf ("%d",fact);return 0;
}
