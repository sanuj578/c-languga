#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the number =");
    scanf("%d",&n);
    k=n/2+1;

    for(i=1;i<=n;i=i+2){
        for(j=1;j<=k;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        k--;
    }
    k=2;
     for(i=n-2;i>=1;i=i-2){
        for(j=1;j<=k;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}