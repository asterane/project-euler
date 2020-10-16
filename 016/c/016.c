/* Problem 16
   Power digit sum
 */

#include <stdio.h>
#include <gmp.h>

int main() {
    unsigned int sum = 0;

    mpz_t power;
    mpz_init2(power, 1000);

    mpz_t hold;
    mpz_init(hold);

    mpz_ui_pow_ui(power, 2, 1000);

    while (mpz_cmp_ui(power, 0) > 0) {
        mpz_mod_ui(hold, power, 10);
        sum += mpz_get_ui(hold);

        mpz_tdiv_q_ui(power, power, 10);
    }

    mpz_clear(hold);
    mpz_clear(power);

    printf("%u\n", sum);
}
