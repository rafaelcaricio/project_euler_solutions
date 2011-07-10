#include<stdio.h>

int fibonacci_under(int max) {
    int acumulator = 0, aux = 0, previsios = 1, last = 1;
    while (last < max) {
        if (last % 2 == 0) {
            acumulator += last;
        }
        aux = last;
        last = previsios + last;
        previsios = aux;
    }
    return acumulator;
}

int main(int argc, char* argv) {
    printf("%d\n", fibonacci_under(4000000));
    return 0;
}
