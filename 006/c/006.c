/* Problem 6
   Sum square difference
 */

#include <stdio.h>

int main() {
    int susq = 0;
    int sqsu = 0;

    for (int i = 1; i < 101; i++) {
        susq += i * i;
        sqsu += i;
    }

    sqsu *= sqsu;

    printf("%i\n", sqsu - susq);
}
