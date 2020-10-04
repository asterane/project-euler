/* Problem 7
   10001st prime
 */

#include <stdio.h>

int main() {
    // Set target index and first odd prime
    int target = 10001;
    int curr = 3;

    // Each iteration of below advances curr to next prime
    for (int i = 2; i < target; i++) {
        int p = 0;
        while (p == 0) {
            curr += 2;
            int hit = 0;
            for (int j = 3; j < curr; j += 2) {
                if (curr % j == 0) {
                    hit = 1;
                    break;
                }
            }
            if (hit == 1) continue;
            p = 1;
        }
    }

    printf("%i\n", curr);
}
