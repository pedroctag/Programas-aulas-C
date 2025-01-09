#include <stdio.h>
#include <stdlib.h>

int main(void) {

int pista;
float velocidade, tempo, tempos,  dis;

//pistas disponiveis
printf("\nspa francorchamps:1\n");
printf("monza:2\n");
printf("interlagos:3\n");
printf("albert park:4\n");

//definição da pista e seu comprimento
printf("\ndefina a pista: ");
scanf("%d", &pista);

if(pista == 1){
    dis = 7.1;
}
if(pista == 2){
    dis = 5.7;
}
if(pista == 3){
    dis = 4.309;
}
if(pista == 4){
    dis = 5.303;
}
printf("defiina o tempo da volta: ");
scanf("%f", &tempo);

tempos = tempo * 60 * 1.233334;
velocidade = (dis / tempos) * (3600);
printf("a velocidae media da volta eh de %.2fkm/h\n", velocidade);

system("pause");

return 0;

}

