// Problem 1
// Multiples of 3 and 5

fn main() {
    let mut sum = 0;

    for i in 0..1000 {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i;
        }
    }

    println!("{}", sum);
}
