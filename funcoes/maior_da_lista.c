#include <stdio.h>

int main() {
    int V[] = {10, 5, 8, 20, 3};
    int N = 5;
    int i = 1;
    int maior = V[0];
    int posM = 0;
    int aux;

    while (i < N){
        if (V[i] > maior){
            maior = V[i];
            posM = i;
        }
        i++;
    }
    
    aux = V[N-1];
    V[N-1] = maior;
    V[posM] = aux;

    return 0;
}
