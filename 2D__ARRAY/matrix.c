#include<stdio.h>
int main(){
    int n, m, i, j, k;
    
    printf("Enter the rows for A: ");
    scanf("%d", &n);
    
    printf("Enter the columns for A and rows for B: ");
    scanf("%d", &m);
    
    int arr[n][m];
    int brr[m][n];
    int crr[n][n];
    
    printf("Matrix A:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Enter element %d*%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Matrix B:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Enter element %d*%d: ", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
    }
    
    printf("Matrix A:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrix B:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d  ", brr[i][j]);
        }
        printf("\n");
    }
    
    // Matrix multiplication
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            crr[i][j] = 0;
            for(k = 0; k < m; k++){
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    
    printf("Matrix C (Result of A*B):\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d  ", crr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
