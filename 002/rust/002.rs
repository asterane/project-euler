// Problem 2
// Even Fibonacci numbers

fn main() {
    let (mut sum, mut prev, mut curr) = (2, 2, 8);

    while curr < 4000000 {
        sum += curr;

        // Use known relationship between even Fibonacci numbers
        let temp = curr;
        curr = 4 * temp + prev;
        prev = temp;
    }

    println!("{}", sum);
}
