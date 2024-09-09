#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;
    float d,r1,r2;

    printf("Digite um valor para a tal que a seja diferente de 0: ");
    scanf("%f",&a);
    printf("Digite um valor para b: ");
    scanf("%f",&b);
    printf("Digite um valor para c: ");
    scanf("%f",&c);
    d=b*b-4*a*c;

    if(d<0){
        printf("A equacao nao possui raizes reais");
        }
    else if(d==0){
        r1=-(b)/2*a;
        printf("A equacao possui uma raiz %f",r1);
        }
    else{
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("A equacao possui duas raizes reais %f e %f ",r1,r2);
        }

    return 0;
}
