#include <stdio.h>
#include <stdlib.h>

int main(){
    int aa;
    int r;
    int n;
    int an;
    printf("Voce esta lidando com uma PA de numeros inteiros! Escolha seus elementos: \nPrimeiro termo: ");
    scanf("%i",&aa);
    printf("Razao: ");
    scanf("%i",&r);
    printf("Escolha o numero: ");
    scanf("%i",&n);
    an=aa+(n-1)*r;
    printf("%i",an);
    return 0;
}
