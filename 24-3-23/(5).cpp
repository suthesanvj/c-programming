#include <stdio.h>

char *call(int *i, float *j);
int main() {
    char *string;
    int a = 2;
    float b = 2.0;
    char *(*ptr)(int*, float*);
    ptr = &call;
    string = (*ptr)(&a, &b);
    printf("%s", string);
    return 0;
}

char *call(int *i, float *j) {
    static char *str = "c-pointer.blogspot.com";
    str = str + *i + (int)(*j);
    return str;
}

