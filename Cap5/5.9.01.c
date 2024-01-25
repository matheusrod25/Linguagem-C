#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main(){
    int num, cont;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    for (cont = 0; cont <= num;cont++){
        printf("%d ",cont);
    }
    return 0;
}**/

//while
/**int main(){
    int num, cont;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    while (cont <= num){
        printf("%d ",cont);
        cont++;
    }
    return 0;
}**/

//do-while
/**int main(){
    int num, cont;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    do{
        printf("%d ",cont);
        cont++;
    } while(cont<=num);
    return 0;
}**/

//goto
int main(){
    int num, cont;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    sequencia:
        if (cont <= num){
            printf("%d ",cont);
            cont++;
            goto sequencia;
        }
    return 0;
}


