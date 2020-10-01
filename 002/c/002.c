/* Problem 2
   Even Fibonacci numbers
 */

#include <stdio.h>

int main() {
    int sum = 0;

    int prev = 1;
    int curr = 2;

    while (curr < 4000000) {
        if (curr % 2 == 0) {
            sum += curr;
        }

        int temp = curr;

        curr += prev;
        prev = temp;
    }

    printf("%i\n", sum);
}
