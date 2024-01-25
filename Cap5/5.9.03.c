#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//continue
/***int main(){
    int num, cont, impar = 0;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    printf("\nOs %d primeiros números naturais ímpares são:\n ",num);
    for (cont = 0; impar < num; cont++){
            if (cont % 2 == 0){
                continue;
            } else {
                printf("%d ",cont);
                }
            impar++;
            }

    return 0;
}***/

//do-while
/***int main(){
    int num, cont = 0, impar = 0;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    printf("\nOs %d primeiros números naturais ímpares são:\n ",num);
    do{
       if (cont % 2 == 1){
        printf("%d ",cont);
        impar++;
       }
       cont++;
    } while(impar < num);

    return 0;
}***/


