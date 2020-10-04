/* Problem 5
   Smallest multiple
 */

#include <stdio.h>

int check(int n);

int main() {
    // Product of all primes between 1 and 20
    int n = 9699690;

    // Multiples of largest prime factor the result must have
    while (check(n) != 1) {
        n += 19;
    }

    printf("%i\n", n);
}

int check(int n) {
    // Only check the necessary factors
    for (int i = 20; i > 10; i--) {
        if (n % i != 0) {
            return 0;
        }
    }
    return 1;
}
