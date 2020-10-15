/* Problem 14
   Longest Collatz sequence
 */

#include <stdio.h>

long count(long n);

int main() {
    long chain = 0;
    long val;

    for (long i = 1; i < 1000000; i++) {
        long next = count(i);
        if (chain < next) {
            chain = next;
            val = i;
        }
    }

    printf("%li\n", val);
}

long count(long n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 1 + count(n / 2);
    return 1 + count(3 * n + 1);
}
