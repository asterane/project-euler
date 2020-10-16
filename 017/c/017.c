/* Problem 17
   Number letter counts
 */

#include <stdio.h>

int ones[10] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
int teens[10] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
int tens[10] = { 0, 3, 6, 6, 5, 5, 5, 7, 6, 6 };

int and = 3;
int hundred = 7;
int thousand = 8;

int count(int n);

int main() {
    int sum = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += count(i);
    }

    printf("%i\n", sum);
}

int count(int n) {
    int val;
    if (n >= 1000) {
        val = n / 1000;
        return thousand + count(val) + count(n - val * 1000);
    }
    if (n >= 100) {
        val = n / 100;
        int rem = count(n - val * 100);
        if (rem != 0) return hundred + and + count(val) + rem;
        else return hundred + count(val);
    }
    if (n >= 20) {
        val = n / 10;
        return tens[val] + count(n - val * 10);
    }
    if (n >= 10) {
        return teens[n - 10];
    }
    return ones[n];
}
