#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main(){
    int num;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    for (num ; num >= 0;num--){
        printf("%d ",num);
    }
    return 0;
}**/

//while
/**int main(){
    int num;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    while (num >= 0){
        printf("%d ",num);
        num--;
    }
    return 0;
}**/

//do-while
/**int main(){
    int num;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    do{
        printf("%d ",num);
        num--;
    } while (num >= 0);
    return 0;
}**/

//goto
int main(){
    int num;
    setlocale(LC_ALL,"");
    printf("Digite um número natural: ");
    scanf("%d",&num);
    sequencia:
        while (num >= 0){
            printf("%d ",num);
            num--;
            goto sequencia;
        }
    return 0;
}

