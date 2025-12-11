#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int V[] = {1, 4, 9, 3, 5, 2};
    int i = 1;
    int maior = V[0];
    int posM = 0;
    int N = 6;

while ( i < N) {
    if (V[i]>maior) {
        maior = V[i];
        posM = i;
    }
    i++;
    }

i = posM + 1;
while (i < N){
    V[i-1] = V[i];
    i++;
    }

V[N-1] = maior;

printf("Vetor modificado: ");
return 0;
}
