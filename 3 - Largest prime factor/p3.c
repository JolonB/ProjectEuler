#include <stdio.h>

int main() {
    long start = 600851475143;
    
    /* Divide by every number (which will also only be primes) until the number is too small
    * Could use sqrt(start), instead of start/2, but I think that would take longer */
    for (int i = 2; i <= start/2; i++) {
        while (start % i == 0) {
            start /= i;
        }
    }

    printf("%li\n", start);
}