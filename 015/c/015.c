/* Problem 15
   Lattice paths */

#include <stdio.h>
#include <gmp.h>

void fac(mpz_t result, int n);

int main() {
    const int size = 20;

    mpz_t count;
    mpz_init2(count, 128);

    mpz_t first;
    mpz_init2(first, 128);

    fac(first, size);
    mpz_mul(first, first, first);

    fac(count, size * 2);
    mpz_cdiv_q(count, count, first);

    gmp_printf("%Zd\n", count);

    mpz_clear(first);
    mpz_clear(count);
}

void fac(mpz_t result, int n) {
    mpz_set_ui(result, 1);

    for (int i = 1; i <= n; i++) {
        mpz_mul_ui(result, result, i);
    }
}
