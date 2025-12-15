#include <stdio.h>
int main(){
    int V[]={1, 4, 25, 12, 17, 24, 25, 25};
    int n = sizeof(V)/sizeof(V[0]);
    int i = 0;
    int cont = 1;
    int maior = 0;
    int impar = 0;
    
    while (i<n){
        if (V[i]%2==1){
            impar = V[i];
            if (V[i+1]==impar){
                cont++;
            }
              
        }
        i++;
        maior = impar;
    }
    
    printf("%d", maior);
    printf("\n%d", cont);
    return 0;
}