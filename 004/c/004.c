/* Problem 4
   Largest palindrome product
*/

#include <stdio.h>

int check(int product);

int main() {
    int result = 0;
    int max = 999;
    int min = 99;

    for (int i = max; i > min; i--) {
        // Avoid duplicate products
        for (int j = max; j > i; j--) {
            int prod = i * j;

            // No point checking if current result is larger
            if (prod < result) {
                break;
            }
            if (check(prod) == 1) {
                result = prod;
                break;
            }
        }
    }

    printf("%i\n", result);
}

int check(int product) {
    int digits[6];
    int n = product;
    int l = 0;

    // Get the digits and count them
    for (int i = 0; i < 6; i++) {
        digits[i] = n % 10;
        if (n < 10) {
            l = i + 1;
            break;
        }
        n = n / 10;
    }

    // Check equivalence of digits in mirror positions
    for (int i = 0; i < l / 2; i++) {
        if (digits[i] != digits[l - i - 1]) {
            return 0;
        }
    }

    return 1;
}
