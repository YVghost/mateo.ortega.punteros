#include <stdio.h>
#include <math.h>


float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2);
float calculoArea( float a, float b, float c)
float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c, float *d, float *e, float *f);
float calculoVolumen(float a, float b, float c, float d, float e, float f);

int main(){
    float per,a,b,c,d,e,f;

    float puntos[4][3]={{0,0,0},{3,0,0},{0,0,3},{1,7,1}};

    float perimetro = calcularPerimetro(puntos,&a,&b,&c,&d,&e,&f);
    float volumen = calculoVolumen(a,b,c,d,e,f);

    float area1 = calculoArea(a,b,c);
    float area2 = calculoArea(a,b,c);
    float area3 = calculoArea(a,b,c);
    float area4 = calculoArea(a,b,c);
    float areat = area1 + area2 + area3 + area3;

    printf("Perimtro %f\n",perimetro);
    printf("area superficial %f",areat)
    printf("Volumen %f\n",volumen);
    return 0;
}

float calcularDistancias(float x1, float y1, float z1, float x2, float y2, float z2){
    float distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return distancia;
}

float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c, float *d, float *e, float *f){

    *a = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1],  puntos[1][2]);
    *b = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][1],  puntos[2][2]);
    *c = calcularDistancias(puntos[1][0], puntos[1][1], puntos[1][2], puntos[2][0], puntos[2][1],  puntos[2][2]);
    *d = calcularDistancias(puntos[2][0], puntos[2][1], puntos[2][2], puntos[3][0], puntos[3][1],  puntos[3][2]);
    *e = calcularDistancias(puntos[0][0], puntos[0][1], puntos[0][2], puntos[3][0], puntos[3][1],  puntos[3][2]);
    *f = calcularDistancias(puntos[3][0], puntos[3][1], puntos[3][2], puntos[1][0], puntos[1][1],  puntos[1][2]);
    float s=(*a+*b+*c+*d+*e+*f);
    return s;
}

float calculoArea( float a, float b, float c){
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

float calculoVolumen(float a, float b, float c, float d, float e, float f){
    float s=(a+b+c)/2;
    float volumen=sqrt(s*(s-a)*(s-b)*(s-c));
    return volumen;
}