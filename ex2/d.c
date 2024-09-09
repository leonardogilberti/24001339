#include <stdio.h>
#include <stdlib.h>

int main(){
   float a;
   float ac;
   printf("Digite o Raio de um circulo em cm: ");
   scanf("%f",&a);
   ac=3.14159265359*(a*a);
   printf("A area do circulo de raio %f e de %f cm quadrados",a,ac);
   return 0;
}
