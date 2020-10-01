/* Problem 3
   Largest prime factor
*/

#include <stdio.h>
#include <stdlib.h>

long factor(long n);

int main(int argc, char *argv[]) {
    long target = 600851475143;
    char *ptr;

    if (argc > 1) target = strtol(argv[1], &ptr, 10);

    printf("%li\n", factor(target));
}

long factor(long n) {
    long fac = n;

    for (long i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            fac = i;
            break;
        }
    }

    if (fac == n) return fac;

    long new = factor(n / fac);
    return fac > new ? fac : new;
}
