#include <stdio.h>

int main() {
    int total = 0;
    
    int a = 1;
    int b = 2;
    int tmp;
    while (b < 4000000) {
        /* Find even numbers */
        if (b % 2 == 0) {
            total += b;
        }
        /* Get next in sequence */
        tmp = b;
        b += a;
        a = tmp;
    }

    printf("%i\n", total);
}