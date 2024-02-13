#include<stdio.h>
int main(){
    int n,m,j,i;
    printf ("enter the rows = ");
    scanf("%d",&n);
    printf("enter the colunm = ");
    scanf("%d",&m);
    
    int arr[n][m]; 
    
    for( i=0;i<n;i++){
        for( j=0;j<m;j++){
            printf("enter the %d*%d=",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("matrix of A=\n");
    for( i=0;i<n;i++){
        for( j=0;j<m;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    int brr[m][n];
    printf("transpose of matrix:\n");
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            brr[i][j] = arr[j][i];
            printf("%d  ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

