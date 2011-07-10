#include<stdio.h>

int is_prime(long number) {
    long n;
    if (number <= 1) {
        return 0;
    }

    for (n = number; n > 1; n--) {
        if (number % n == 0 && number != n) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char* argv) {
    long num = 600851475143, i = 0;

    while (num != 1) {
        if (is_prime(i)) {
            if (num % i == 0) {
                printf("%ld\n", i);
                num = num / i;
            }
        }
        i++;
    }

    return 0;
}
