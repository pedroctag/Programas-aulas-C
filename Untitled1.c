 #include <stdio.h>

int main(){
int num,soma = 0;

while(num <= 100){
    num++;
    if(num % 3 == 0 || num % 5 == 0)
        soma += num ;
}

printf("%d", soma);

return 0;
 }


