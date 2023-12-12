#include <stdio.h>
#include <stdbool.h>

int power(int x, unsigned int y, int p) {
    int result = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1)
            result = (result * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return result;
}

bool is_primitive_root(int g, int p) {
    // Check if g is a primitive root modulo p
    int powers[p - 1];
    for (int i = 1; i <= p - 1; i++)
        powers[i - 1] = power(g, i, p);

    // Check for uniqueness of powers
    for (int i = 0; i < p - 2; i++)
        for (int j = i + 1; j < p - 1; j++)
            if (powers[i] == powers[j])
                return false;

    return true;
}

void find_primitive_roots(int p) {
    printf("Primitive roots modulo %d: ", p);
    for (int g = 2; g < p; g++) {
        if (is_primitive_root(g, p))
            printf("%d ", g);
    }
    printf("\n");
}

int main() {
    int prime;
    printf("Enter a prime number: ");
    scanf("%d", &prime);

    find_primitive_roots(prime);
    return 0;
}
