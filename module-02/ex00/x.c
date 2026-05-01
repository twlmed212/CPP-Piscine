#include <stdio.h>

int main() {
    float a = 0.1 + 0.2;
    float b = 0.3;

    if (a == b) {
        printf("eq\n");
    } else {
        printf("non eq\n");
    }

    printf("a = %.20f\n", a);
    printf("b = %.20f\n", b);

    return 0;
}