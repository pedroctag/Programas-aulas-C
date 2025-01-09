#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(){

  int i,j,v=1,m[N][N];
  int *p,*p1;

printf("=== Matriz 10x10 com Ponteiros ===");

  p=&m[0][0];

  printf("\ninicializacao:\n");
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
       *p = 0;

        p++;

        printf("%d ", m[i][j]);
    }
    printf("\n");
  }

p1=&m[0][0];

  printf("Atualizacao:\n");
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
        *p1=v;

         v++;
         p1++;


        printf("%d ", m[i][j]);
    }
    printf("\n");
  }



	return 0;
}
