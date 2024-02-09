#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of digits: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the %d digit: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Reversed digits: ");
    for (int j = n - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

   return 0;
}