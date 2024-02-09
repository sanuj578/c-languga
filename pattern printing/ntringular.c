#include<stdio.h>
int main(){
    int n;
    int i,j;
    printf("enter the number =");
    scanf("%d",&n);
    for ( i=1;i<=n;i=i+2){
        for (j=1;j<=i;j++){
            printf("%d",n);
        }
    }
    return 0;
}