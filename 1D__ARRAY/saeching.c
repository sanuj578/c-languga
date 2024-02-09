#include<stdio.h>
int  main() {
   int arr[10] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 11};
    int n;
    int flag = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < 10; i++) {
        if (n % arr[i] == 0) {
            flag = 1; 
            break;  
        }
    }
    
    if (flag == 1) {
        printf("%d is divisible by at least one element in the array.\n", n);
    } else {
        printf("%d is not divisible by any element in the array.\n", n);
    }
    
    return 0;
}
