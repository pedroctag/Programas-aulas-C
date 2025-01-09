#include<stdio.h>
#include<string.h>

typedef struct{

char nome[50];
int ano_nascimento;
float peso;
float altura;
int leito;

}paciente;

int main(){

paciente pac[20];
int i,qnt=0;
char sit;


for(i=0;i<20;i++){

    fflush(stdin);
    printf("\nNovo paciente (s/n)?");
gets(&sit);
        if(sit=='n')
        break;
else;

printf("Nome do paciente: ");
gets(pac[i].nome);

printf("Ano de nascimento: ");
scanf("%d",&pac[i].ano_nascimento);

printf("Peso: ");
scanf("%f",&pac[i].peso);

printf("Altura: ");
scanf("%f",&pac[i].altura);

printf("Leito: ");
scanf("%d",&pac[i].leito);

qnt++;
}
printf("%d",i);
printf("==== Pacientes ====");

for(i=0;i<qnt;i++){

printf("\n\n");
printf("Nome: %s,",pac[i].nome);
printf(" Ano: %d,",pac[i].ano_nascimento);
printf(" Peso: %.2f,",pac[i].peso);
printf(" Altura: %.2f,",pac[i].altura);
printf(" Leito: %d",pac[i].leito);

}









}
