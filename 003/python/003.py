# Problem 3
# Largest prime factor

import sys


def main():
    target = 600851475143

    if len(sys.argv) > 1:
        target = int(sys.argv[1])

    print(factor(target))


def factor(n):
    fac = n

    for i in range(2, int(n / 2)):
        if n % i == 0:
            fac = i
            break

    if fac == n:
        return fac

    new = factor(int(n / fac))
    return fac if fac > new else new


main()
