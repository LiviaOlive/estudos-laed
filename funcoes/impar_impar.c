#include <stdio.h>
int main(){
    int V[]={1, 4, 25, 12, 17, 24, 25, 25};
    int n = sizeof(V)/sizeof(V[0]);
    int freq[26] = {0};
    int i;
    
    for (i = 0; i < n; i++) {
        if (V[i] % 2 == 1) {
            freq[V[i]]++;
        }
    }
    
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0 && freq[i] % 2 == 1) {
            printf("Número: %d, Quantidade: %d\n", i, freq[i]);
        }
    }
    
    return 0;
}