#include<stdio.h>
int main (){
    int arr[10];
    int sum =0;
    float average;
    int i;
    for( i=0;i<=9;i++){
        printf("enter the array %d  digit = ",i+1);
        scanf("%d",&arr[i]);
        sum =sum+arr[i];
    }
    average=sum/10;
    printf("%f",average);
    return 0;
}