#include<stdio.h>
int main(){
    int n,m;
    int arr[n][m];
    int brr[m][n];
    printf ("enter the rows = ");
    scanf("%d",&n);
    printf("enter the colunm =");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the %d*%d=");
            scanf("%d",&arr[n][m]);
        }
    }
    printf("tranpos of matrix:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}