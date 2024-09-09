#include <stdio.h>
#include <stdlib.h>



int main () {
    int a;
    int b;
    int c;
    printf("digite um numero inteiro: ");
    scanf("%d",&a);
    printf("digite um numero inteiro diferente do anterior: ");
    scanf("%d",&b);
    printf("digite um numero inteiro diferente dos demais digitados: ");
    scanf("%d",&c);
    printf(" A ordem inversa digitada e :\n %d\n %d\n %d\n",c,b,a);
    return 0 ;
}
