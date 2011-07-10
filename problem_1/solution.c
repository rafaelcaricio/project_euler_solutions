#include<stdio.h>

int numbers_mult_3_5_under(int max) {
    int acumulator = 0, i = 0;
    for (; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            acumulator += i;
        }
    }
    return acumulator;
}

int main(int argc, char* argv) {
    printf("%d\n", numbers_mult_3_5_under(1000));
    return 0;
}
