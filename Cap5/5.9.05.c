#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//la�o - considerando 0 como primeiro par
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
    printf("A soma dos %d primeiros n�meros pares � %d",n,soma);
    return 0;
}**/

//F�rmulas da progress�o aritm�tica (PA) - considerando 0 como primeiro par
// an = a1 + (n-1)*r    a1 = termo 1, an = n-�simo termo, n = n�mero de termos da PA, r = raz�o = an - an-1
// sn = ((a1+an)*n)/2   sn = somat�rio de n termos de um PA
/**int main(){
    int a1 = 0, r = 2 , an ,sn, n = 50;
    setlocale(LC_ALL,"");
    an = a1 + (n-1)*r;
    sn = ((a1+an)*n)/2;
    printf("A soma dos %d primeiros n�meros pares � %d",n,sn);
    return 0;
}**/




