#include<stdio.h>

int is_palindrome(int number) {
    int initial = number, reverse = 0, digit = 0;
    while (number > 0) {
        digit = number % 10;
        reverse = digit + reverse * 10;
        number = number / 10;
    }
    return initial == reverse;
}

int main(int argc, char* argv) {
    int i, j, largest_palindrome = 0;

    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            if (is_palindrome(i * j) && largest_palindrome < (i * j)) {
                largest_palindrome = i * j;
            }
        }
    }

    printf("%d\n", largest_palindrome);
    return 0;
}
