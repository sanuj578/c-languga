#include <stdio.h>

void count(int arr[], int size) {

    int count[10] = {0};

    int i;
    for (i = 0; i < size; i++) {
        int num = arr[i];
        while (num > 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }

  
    printf("Digit Counts:\n");
    for ( i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, count[i]);
    }
}

int main() {
    int size;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

   
    int arr[size];
	int j;
    
    printf("Enter the elements of the array:\n");
    for ( j = 0; j < size; j++) {
        printf("Element %d: ", j + 1);
        scanf("%d", &arr[j]);
    }


    count(arr, size);

    return 0;
}
