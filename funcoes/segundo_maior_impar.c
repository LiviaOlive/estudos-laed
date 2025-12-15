#include <stdio.h>

int main(){
    int V[] = {3,5,2,1,9,6,7,10};
    int n = 8;
    int i = 1;
    int maior = V[0];
    int smaior = V[0];
    
    while (i<n){
        if (V[i]>maior){
           maior =  V[i];
           i++;
        }
        else if (V[i]>smaior){
            smaior = V[i];
            i++;
        }
        else{
            i++;
        }
    }
    printf ("o segundo maior impar e: %d", smaior);
}