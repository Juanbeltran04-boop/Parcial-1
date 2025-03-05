#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 40; // Número de Fibonacci que vamos a calcular
    long long result = fibonacci(n);
    printf("El %d-ésimo número de Fibonacci es: %lld\n", n, result);
    return 0;
}