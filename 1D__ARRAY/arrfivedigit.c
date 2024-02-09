#include<stdio.h>
int main(){
    int n;
    int i;
    int j;
    int arr[n];
    printf("enter the digit =");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter the %d digit  =",i+1);
    scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        printf("%d",arr[j]);
    }

    return 0;
}