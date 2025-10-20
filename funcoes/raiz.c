#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func (float x, int n) {
    float resultado = pow(x,(1.0/n));
    return resultado;
}

int main () {
    int x;
    float y;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero real: ");
    scanf("%f", &y);
    printf("A %d-esima raiz de %f é igual a %.2f", x, y, func(y,x));
return 0;
}