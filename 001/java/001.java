// Problem 1
// Multiples of 3 and 5

class _001 {
    public static void main(String[] args) {
        int sum = 0;

        for (int i = 0; i < 1000; i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }

        System.out.println(sum);
    }
}
