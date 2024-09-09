#include <stdio.h>
#include <stdlib.h>

int main(){
    float h;
    float l;
    float mlsdetinta;
    int lasc;

    printf("Altura em metros: ");
    scanf("%f",&h);
    printf("Largura em metros: ");
    scanf("%f",&l);
    mlsdetinta=(l*h)*300;
    scanf("f",&mlsdetinta);
    lasc= (int)mlsdetinta/2000;
    if(mlsdetinta/2000>lasc){
        printf("%i latas de tinta",lasc+1);
    }


return 0;

}
