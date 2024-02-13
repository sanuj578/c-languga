#include<stdio.h>
int main(){
    int n,m,j,i;
    int arr[n][m];
    int brr[m][n];
    printf ("enter the rows = ");
    scanf("%d",&n);
    printf("enter the colunm =");
    scanf("%d",&m);
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
    printf("tranpos of matrix:\n");
    for( i=0;i<n;i++){
        for( j=0;j<m;j++){
            
			brr[j][i]=arr[i][j];
            printf("%d  ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
