#include <stdio.h>

int square(int x) {
    return x*x;
}

int main() {
    int i;
    i = 64 / square(4);
    printf("%d", i);
    return 0;
}

