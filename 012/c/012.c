/* Problem 12
   Highly divisible triangular number
*/

#include <stdio.h>

int countdiv(int n);

int main() {
    int target = 500;
    int i = 3;
    int n = 3;

    while (1) {
        n += i;
        if (countdiv(n) > target) break;
        i++;
    }

    printf("%i\n", n);
}

int countdiv(int n) {
    int curval = n;
    int curfac = 1;
    int count = 1;
    int run = 0;

    // Perform prime factorization, multiplying together the exponents plus 1
    // To avoid complexity, count "runs" of a factor and multiply as we go
 check:
    for (int i = 2; i * i <= curval; i++) {
        if (curval % i == 0) {
            if (i == curfac) {
                run++;
            } else {
                count *= run + 1;
                curfac = i;
                run = 1;
            }
            curval /= curfac;
            goto check;
        }
    }

    if (curval == curfac) return count * (run + 2);
    else return count * (run + 1) * 2;
}
