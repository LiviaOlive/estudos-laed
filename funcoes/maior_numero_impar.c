#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int V[] = {1, 4, 9, 3, 5, 2};
    int N = 6;
    int i = 0;
    int maior = 0;

    while ( i < N) {
        if (V[i] % 2 != 0){
            if (V[i]>maior) {
                maior = V[i];
            }
        }
        i++;
    }
    printf ("Maior numero impar: %d\n", maior);
    return 0;
}
