#include <stdio.h>
#include <math.h>


float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2);
float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c);
float calculoArea(float a, float b, float c);

int main(){
    float per,a,b,c;

    float puntos[3][3]={{0,0,0},{3,0,0},{0,0,3}};

    float perimetro = calcularPerimetro(puntos,&a,&b,&c);
    float area = calculoArea(a,b,c);

    printf("Perimtro %f\n",perimetro);
    printf("Area %f\n",area);
    return 0;
}

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2){
    float distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return distancia;
}

float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c){

    *a = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1],  puntos[1][2]);
    *b = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][1],  puntos[2][2]);
    *c = calcularDistancias(puntos[1][0], puntos[1][1], puntos[1][2], puntos[2][0], puntos[2][1],  puntos[2][2]);

    float s=(*a+*b+*c);
    return s;
}

float calculoArea( float a, float b, float c){
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}