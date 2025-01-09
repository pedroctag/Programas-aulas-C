#include <stdio.h>

int main() {
int x[10][10],d=0,i,j;

 for(i=0;i<10;i++){
    for(j=0;j<10;j++){
    x[i][j]=d;
    d++;

    printf("%d ",x[i][j]);
    }
  printf("\n");
 }

  return 0;
}
