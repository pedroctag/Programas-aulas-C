#include <stdio.h>
#include <time.h>
#include <stdlib.h>

  int main(void){
    int j, i,igual,s,l, n[6];

    printf("escolha um numero:");
     scanf("%d",&s);
    printf("numero de participantes (de 1 a 8):");
    scanf("%d",&l);


    srand(s);


    do{
     n[j]=rand()%7;
     igual=0;
     for(i=0;i<j;i++){
       if(n[i]==n[j]){
         igual=1;
       }
     }
    if(igual==0){
      j++;
    }
   } while(j<l);
   for (j = 0; j < l; j++) {

        //printf("%d ", n[j]);

  switch(n[j]){
case 0:
    printf("Pedro ");break;

case 1:
    printf("Thiagola ");break;

case 2:
    printf("Jao ");break;

case 3:
    printf("Gupeganocu ");break;

case 4:
    printf("apu ");break;

case 5:
    printf("ludbus ");break;

case 6:
    printf("MATHEUSO ");break;

case 7:
    printf("Carlin ");break;

default:
    printf("");
 }
  }
  }


