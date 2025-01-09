#include <stdio.h>
#include<stdlib.h>

void encontraExtremos();

int main(void) {

  int *v,i;

  v= malloc(10* sizeof(int));


  printf("Entre com os 10 valores: ");
  scanf("%d %d %d %d %d %d %d %d %d %d ",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9]);

  for(i=0;i<10;i++)
  //printf("%d",v[i]);


  encontraExtremos(v, menor, maior);

  return 0;
}

void encontraExtremos(int *v, int *menor, int *maior){

  int i;

  for(i=0;i<10;i++){

    if(v[i]>*maior){
        *maior=v[i];
      }
      else{
        if(v[i]<*menor){
            *menor=v[i];}}


}

printf("Menor : %d",*menor);
printf("Maior : %d",*maior);
}
