#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    char n[30];
    int c;
    printf("Qual e seu nome ? ");
    scanf("%s",&n);
    printf("Quantos anos voce tem ? ");
    scanf("%d",&a);
    c=a*365;
    printf("Voce tem aproximadamente %d dias de vida! ",c);
    return 0;
}
