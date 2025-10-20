#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int *pi, *pj;
    pi = &x;
    pj = pi;
    (*pi)++;
    (*pj)++;
    printf("x = %d\n", x);
    return 0;
}
