#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

main(){

float x, ad, at, aux, tetat, tetad;
float arras,pres,arrt,pbac,pfron,atot, arrc;
float vmx, g, u;
char e;



do{
printf("================================================================================\n");
printf("\nColoque o angulo das asas\n\n");
printf(" Angulo asa traseira:");
scanf("%f", &at);
printf(" Angulo asa dianteira:");
scanf("%f", &ad);


tetad=ad*(PI/180);
tetat=at*(PI/180);

x=(sin(tetad)*sin(tetad)*0.3*2)+(sin(tetat)*sin(tetat)*0.3*1.05)+(0.9*1.112);

//Velocidade maxima em reta com a configuracao

g=1372359.184/x;
aux=pow(g,1.0/3.0);
vmx= aux*3.6;

//pressão asa dianteira em vmax
pfron=cos(tetad)*((sin(tetad)*0.3)*2)*0.7*1.225*aux*aux/2;

//pressão asa traseira
pbac=cos(tetat)*((sin(tetat)*0.3)*1.05)*0.7*1.225*aux*aux/2;


pres=pfron+pbac;
printf(("\n\n Forca aerodinamica total em velocidade maxima (eixo y): %.2fN\n"), pres);

//arrasto
arras=(sin(tetad)*(sin(tetad)*0.3)*2)*0.7*1.225*aux*aux/2;
arrt=(sin(tetat)*(sin(tetat)*0.3)*1.05)*0.7*1.225*aux*aux/2;
arrc=1.0008*0.7*1.225*aux*aux/2;

atot=arras+arrt+arrc;

printf("\n Arrasto total em velocidade maxima (eixo x) : %.2fN\n", atot);

u=(cos(tetad)*((sin(tetad)*0.3)*2)*0.7*1.225/2)+(cos(tetat)*((sin(tetat)*0.3)*1.05)*0.7*1.225/2);


//Velocidade maxima curva 1

float v1,r1;

r1=0.98*750*9.8/((750/69.86)-0.98*u);
v1=sqrt(r1)*3.6;

//Velocidade maxima curva 2

float v2,r2;

r2=0.98*750*9.8/((750/106.63)-0.98*u);
v2=sqrt(r2)*3.6;

//Velocidade maxima curva 3

float v3,r3;

r3=0.98*750*9.8/((750/105.46)-0.98*u);
v3=sqrt(r3)*3.6;

//Velocidade maxima curva 4

float v4,r4;

r4=0.98*750*9.8/((750/121.27)-0.98*u);
v4=sqrt(r4)*3.6;

//Velocidade maxima curva 5

float v5,r5;

r5=0.98*750*9.8/((750/235.29)-0.98*u);
v5=sqrt(r5)*3.6;



printf("\nVelocidades maximas:\n\n    Em reta   | %.2fKm/h |\n    Curva 1   | %.2fKm/h  |\n    Curva 2   | %.2fkm/h |\n    Curva 3   | %.2fKm/h |\n    Curva 4   | %.2fKm/h |\n    Curva 5   | %.2fKm/h |\n",vmx,v1, v2, v3, v4, v5);

fflush(stdin);
printf("\n\nConfigurar outro acerto (s/n)?");
gets(&e);
}while (e!='n');



return 0;
}
