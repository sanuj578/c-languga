#include<stdio.h>
int main(){
    int arr[2][2];
    int n;
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("enter the rows*column=%d",arr[i][j]);
        scanf("%d%d",arr[i][j]);
        printf("array=",arr[i][j]);
    }
    printf("\n");
    }
    return 0;

}