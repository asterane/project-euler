/* Problem 18
   Maximum path sum I
 */

#include <stdio.h>

/* int tri[10] = { 3, 7, 4, 2, 4, 6, 8, 5, 9, 3 }; */
/* int best[10] = { 0 }; */
/* int rows = 4; */

int tri[120] =
    { 75,
      95, 64,
      17, 47, 82,
      18, 35, 87, 10,
      20, 04, 82, 47, 65,
      19, 01, 23, 75, 03, 34,
      88, 02, 77, 73, 07, 63, 67,
      99, 65, 04, 28, 06, 16, 70, 92,
      41, 41, 26, 56, 83, 40, 80, 70, 33,
      41, 48, 72, 33, 47, 32, 37, 16, 94, 29,
      53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,
      70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,
      91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,
      63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,
      04, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60, 04, 23 };

int best[120] = { 0 };

int rows = 15;

void bsh(int row, int pos);
int rsi(int row);

int main() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i + 1; j++) {
            bsh(i, j);
        }
    }

    int max = 0;
    for (int k = 0; k < rows; k++) {
        if (best[rsi(rows - 1) + k] > max) {
            max = best[rsi(rows - 1) + k];
        }
    }

    printf("%i\n", max);
}

// best sum here
void bsh(int row, int pos) {
    if (row == 0) {
        best[0] = tri[0];
    } else {
        int sum_a = pos == 0 ? 0 : best[rsi(row - 1) + pos - 1];
        int sum_b = pos == row ? 0 : best[rsi(row - 1) + pos];

        if (sum_a >= sum_b) {
            best[rsi(row) + pos] = sum_a + tri[rsi(row) + pos];
        } else {
            best[rsi(row) + pos] = sum_b + tri[rsi(row) + pos];
        }
    }
}

// row start index
int rsi(int row) {
    int out = 0;
    for (int i = 0; i <= row; out += i++);
    return out;
}
