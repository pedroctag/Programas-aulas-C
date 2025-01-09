#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main() {

char m[10][10], aux='?', jogo[10][10];
int i,j,x,y,au,jog=0;
int p,t,igual,r;

printf("Escolha o jogo:");
scanf("%d",r);
srand(r);


//printf("Visual:\n");
//visual


for(i=0; i<10; i++){
    for(j=0;j<10;j++){
    m[i][j] =aux;
    jogo[i][j] = ' ';

    //printf("%c ",m[i][j]);
}
//printf("\n");
}

//jogo

/*jogo[1][1]='*';
jogo[1][7]='*';
jogo[2][6]='*';
jogo[2][7]='*';
jogo[4][3]='*';
jogo[4][9]='*';
jogo[5][3]='*';
jogo[7][6]='*';
jogo[8][2]='*';
jogo[9][8]='*';*/
do{
    jogo[i][j] =rand()%1;
     igual=0;
     for(i=0;i<10;i++){
            for(j=0;j<10;j++){
       if(jogo[i][j]==jogo[p][t]){
         igual=1;
       }
     }
     }
    if(igual==0){
      ;
    }
   } while(j<10);




for(i=0; i<10; i++){
    for(j=0;j<10;j++){

    if(jogo[i][j] == ' '){
        au=0;
    if(((i > 0) && (j > 0)) && (jogo[i-1][j-1] == '*'))
        au++;
    if((j > 0) && (jogo[i][j-1] == '*'))
        au++;
    if(((i < 9) && (j > 0)) && (jogo[i+1][j-1] == '*'))
        au++;
    if((i > 0) && (jogo[i-1][j] == '*'))
        au++;
    if((i < 9) && (jogo[i+1][j] == '*'))
        au++;
    if(((i > 0) && (j < 9)) && (jogo[i-1][j+1] == '*'))
        au++;
    if((j < 9) && (jogo[i][j+1] == '*'))
        au++;
    if(((i < 9) && (j < 9)) && (jogo[i+1][j+1] == '*'))
        au++;
    if(au > 0)
    jogo[i][j] = au+48;
      }
     }
    }

    while(jog<90){

printf("Digite a linha: ");
scanf("%d", &x);
printf("Digite a coluna: ");
scanf("%d", &y);
printf("\n");
jog++;

    for(i=0; i<10; i++){
        for(j=0;j<10;j++){
        //if((x>=0 && x<=9) && (y >=0 && y<=9))
        m[x][y]=jogo[x][y];

printf("%c ",m[i][j]);
}
printf("\n");}
    if(jogo[x][y]=='*')
            break;

printf("\n");
    }
    printf("\n%c",m[i][j]);
    printf("Voce perdeu!\n");
printf("Jogadas = %d",jog);



return 0;
}
