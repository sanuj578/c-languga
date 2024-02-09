#include<stdio.h>
int main(){
    int n;
    int i;
    int j;
    int arr[n];
    printf("enter the digit =");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
    printf("enter the %d digit  =",i+1);
    scanf("%d",&arr[i]);
   // printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[i]);
    

    return 0;
}