#include <stdio.h>
#include <stdlib.h>

int main(){
    float p;
    float v;
    float t;
    float m;
    printf("Pression: ");
    scanf("%f",&p);
    printf("Volume: ");
    scanf("%f",&v);
    printf("temperature: ");
    scanf("%f",&t);
    m=p*v/(0.37*(t+460.0));
    printf("A massa de ar do pneu e de %f",m);
    return 0;

}
