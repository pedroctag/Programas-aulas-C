#include <stdio.h>

void limpa ();
int main(){

    char e;
    float m1, m2, r, ref;

    printf("limpar tela ou seguir ");
    scanf("%c", &e);

    if(e=='limpar')
        limpa();
    else
        return 0;

    printf("\ninsira a medida da cintura: ");
    scanf("%f", &m1);

    printf("\ninsira a medida do torax: ");
    scanf("%f", &m2);

    r = m1 / m2;

    printf("\na relacao eh de %f\n", r);
    system("pause");

    ref = 0.9289340102 - r;

    if(ref > 0){
        printf("\nhouve ganho de -%f\n", ref);
        system("pause");
        }
    else{
        printf("\nhouve perda de %f\n"), abs(ref);
        system("pause");
    }
   printf("\nobjetivo de 0.6\n");


   system("pause");

   return 0;
}
void limpa (){

    int i;

    for(i=0;i<20;i++){
        printf("\n");
    }

}







