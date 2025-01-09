# include <stdio.h>
# include <conio.h>

int main(void){

float preco_produto, valor_icms;

printf("informe o valor do produto: ");
scanf("%f", &preco_produto);

valor_icms = preco_produto * 0.1254;

printf("Valor de imposto a ser pago: %2.f", valor_icms);

getch();
return 0;
}
