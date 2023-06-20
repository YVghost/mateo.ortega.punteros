#include <stdio.h>


int main() {

    float *puntero1;
    float *puntero2;
    float aux=100;
    puntero1=&aux;
    puntero2=&aux;

    printf("valor aux %f\n",aux);
    printf("ubicacion %p\n",&aux);

    printf("valor puntero 1 %f\n",*puntero1);
    printf("ubicacion punteor %p\n",puntero1);

    
    printf("------- %f\n",aux);
    *puntero2=4;
    printf("------- %f\n",aux);


    return 0;
}
    