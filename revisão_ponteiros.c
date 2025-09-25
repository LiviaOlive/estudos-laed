#include <stdio.h>
#include <stdlib.h>

void impressao(){
    int x = 10, y = 20;
    int *p;
    p = &x;
    y =*p;
    printf("y = %d\n", y);
    return;
}

int main() {
    int x = 10;
    printf("o valor de x e: %d\n", x);
    int IDADE = 25;
    int *PIDADE = 0;
    PIDADE = &IDADE;
    printf("o valor de IDADE e: %d\n", *PIDADE);
    printf("o endereco de IDADE e: %i\n", &IDADE);
    printf("o endereco de memoria e: %x\n", PIDADE);
    impressao();
// Operador unário & (“endereço de”)
// Operador unário * (“conteúdo de”)
    return 0;
}

void func(){
    int* ptr= (int*)malloc(sizeof(int));
    *ptr = 20;
    free(ptr);//libera a memoria alocada
}

int variaveis(){
    int i;
    char c;
    float f;
    double d;
    return 0;
}

