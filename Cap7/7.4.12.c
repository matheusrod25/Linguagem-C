#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
  { char produto[100];
    float valor_total, valor_desc, valor_pago;
    setlocale(LC_ALL,"");
    printf("Digite o nome do produto: ");
    fgets(produto,100,stdin);
    produto[strlen(produto)- 1] = '\0';
    printf("Digite o valor do produto: ");
    scanf("%f",&valor_total);
    valor_desc = 0.1 * valor_total;
    valor_pago = valor_total - valor_desc;
    printf("\nO %s custa R$ %.2f%",produto,valor_total);
    printf("\nValor do desconto = R$ %.2f",valor_desc);
    printf("\nValor a ser pago à vista = R$ %.2f",valor_pago);
    return 0;  }


