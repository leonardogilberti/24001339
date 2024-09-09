#include <stdio.h>
#include <stdlib.h>

float c,f;


int main(){
    printf("Escreva uma temperatura em graus Farenheit: ");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("%f em Farenheit, corresponde a %f em graus Celcius.",f,c);
    return 0;

}
