// Implement a function to find all prime numbers in a given range.

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to find and print all prime numbers in a given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;

    // Taking input from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Calling function to print primes in the given range
    printPrimesInRange(start, end);

    return 0;
}
