#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Ate quanto contar: ");
    scanf("%d", &n);
    int *vetor;
    vetor = (int *) malloc(n * sizeof(int));

    if(vetor == NULL){
        printf("\nErro ao alocar memoria\n");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        vetor[i] = i + 1;
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    free(vetor);
    printf("\nMemoria liberada com sucesso\n");

    return 0;
}

