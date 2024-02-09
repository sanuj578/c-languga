#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If num is divisible by any number from 2 to sqrt(num), it's not prime
    }
    return 1; // If no divisor found, it's a prime number
}

int main() {
    int i;
    printf("Prime numbers between 1 to 100 are:\n");
    for ( i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
