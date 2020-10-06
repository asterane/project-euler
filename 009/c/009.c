/* Problem 9
   Special Pythagorean triplet
 */

#include <stdio.h>
#include <math.h>

int main() {
    int a = 0;
    int b;
    int c;

    while (1) {
        a++;
        for (b = 1; b < a; b++) {
            float tmpf = sqrt(a * a + b * b);
            int tmpi = rintf(tmpf);
            if (tmpf == tmpi && a + b + tmpi == 1000) {
                c = tmpi;
                goto done;
            }
        }
    }

 done:
    printf("%i\n", a * b * c);
}
