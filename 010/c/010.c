/* Problem 10
   Summation of primes
 */

#include <stdio.h>

#define TARGET 2000000

int main() {
    int list[TARGET / 2] = { 0 };
    int size = TARGET / 2;
    long sum = 2;

    // Runs the Sieve of Eratosthenes over all odd numbers up to target
    for (int i = 1; i < size; i++) {
        int curr = 2 * i + 1;
        for (int j = i + curr; j < size; j += curr) {
            list[j] = 1;
        }
        if (!list[i]) sum += curr;
    }

    printf("%li\n", sum);
}
