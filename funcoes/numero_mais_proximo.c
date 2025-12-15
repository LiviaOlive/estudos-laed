#include <stdio.h>

void busca_aproximada(int V[], int n, int k){
    int mais_proximo = V[0];
    int menor_diferenca = V[0] - k;
    if (menor_diferenca<0){
        menor_diferenca = -menor_diferenca;
    }
    for (int i = 0; i < n; i ++){
        if (V[i]==k){
            printf ("achamos o numero exato");
            return;
        }
        int diferenca_atual = V[i]-k;
        if (diferenca_atual<0){
            diferenca_atual = -diferenca_atual;
        }
        if (diferenca_atual<menor_diferenca){
            menor_diferenca=diferenca_atual;
            mais_proximo = V[i];
        }
       
    }
    printf("o numero mais proximo e: %d", mais_proximo);
}
int main(){
    int V[]={1, 4, 12, 17, 24, 25};
    int k = 15;
    int n = sizeof(V)/sizeof(V[0]);
    busca_aproximada(V, n, k);

    return 0;
}