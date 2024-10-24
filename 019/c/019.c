/* Problem 19
   Counting Sundays
*/

#include <stdio.h>

int mlens[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int months = 1211;

int main() {
    int count = 0;

    int day = 365;
    for (int i = 12; i < months; i++) {
        day += mlens[i % 12];
        if (i % 12 == 1 && (i - 1) % 48 == 0) {
            day += 1;
        }
        if (day % 7 == 6) count++;
    }

    printf("%i\n", count);
}
