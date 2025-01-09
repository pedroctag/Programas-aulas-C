#include<stdio.h>
#include<stdlib.h>

void inicializaMatriz(int [][10], int);
void imprimeOpcoes();
void imprimaPiso(int [][10], int);

int main(){
int op,piso[10][10],i,j,des;

printf("Drawing Robot ------------------\n\n");

inicializaMatriz(piso, 10);

do{
imprimeOpcoes(&op);
imprimaPiso(piso,10);



if(des==1){
        piso[i][j]=1;
        imprimeOpcoes();
        imprimaPiso(piso,10);
    }
    switch(op){
case 1:des=0;
break;

case 2:des=1;
break;

case 3:
    if(j>0)
    j=j-1;
    imprimeOpcoes();
    imprimaPiso(piso,10);
break;

case 4:
    if(j<9)
    j=j+1;
    imprimeOpcoes();
    imprimaPiso(piso,10);

case 5:
    if(i>0)
    i=i-1;
    imprimeOpcoes();
    imprimaPiso(piso,10);
break;

case 6:
    if(i<9)
    i=i+1;
    imprimeOpcoes();
    imprimaPiso(piso,10);

    }
scanf("%d",&op);
}while(op <=6 );}


void inicializaMatriz(int piso[][10],int linha){

int i,j;

for(i=0; i<10; i++){
    for(j=0; j<10; j++){
    piso[i][j]=0;

    //printf("%d ",piso[i][j]);
    }
    //printf("\n");
   }

}

void imprimeOpcoes(int *op){

printf("Digite uma das opcoes abaixo para operar o robo:");
printf("\n1 - Caneta para cima");
printf("\n2 - Caneta para baixo");
printf("\n3 - Anda para esquerda");
printf("\n4 - Anda para direita");
printf("\n5 - Anda para cima");
printf("\n6 - Anda para baixo");
printf("\n7 - Finalize a operacao");
printf("\nEnter: ");
printf("Matriz Final:\n");
}

void imprimaPiso(int piso[10][10],int x){

int i, j;
char m[10][10];

for(i=0;i<10;i++){
    for(j=0;j<10;j++){


        if(piso[i][j]==0)
        m[i][j]=' ';

        if(piso[i][j]==1)
        m[i][j]='*';

        printf("%c",m[i][j]);
    }
    printf("\n");
}

}
