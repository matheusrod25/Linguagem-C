#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//laço - considerando 0 como primeiro par
/**int main(){
    int soma = 0,cont = 0,pares = 0 , n = 50;
    setlocale(LC_ALL,"");
    while (pares < n){
        if (cont % 2 == 0){
            soma += cont;
            pares++;
        }
        cont++;
    }
    printf("A soma dos %d primeiros números pares é %d",n,soma);
    return 0;
}**/

//Fórmulas da progressão aritmética (PA) - considerando 0 como primeiro par
// an = a1 + (n-1)*r    a1 = termo 1, an = n-ésimo termo, n = número de termos da PA, r = razão = an - an-1
// sn = ((a1+an)*n)/2   sn = somatório de n termos de um PA
/**int main(){
    int a1 = 0, r = 2 , an ,sn, n = 50;
    setlocale(LC_ALL,"");
    an = a1 + (n-1)*r;
    sn = ((a1+an)*n)/2;
    printf("A soma dos %d primeiros números pares é %d",n,sn);
    return 0;
}**/




