#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main(){
    int num = 3, cont = 5;
    setlocale(LC_ALL,"");
    printf("Os %d primeiros m�ltiplos de %d s�o: \n",cont,num);
    for (num;num <= 3*cont;num+=3)
        printf("%d ",num);
    return 0;
}**/

//while
/**int main(){
    int num = 3, mult = 0;
    setlocale(LC_ALL,"");
    printf("Os 5 primeiros m�ltiplos de %d s�o: \n",num);
    while (mult < 5){
        printf("%d ",num);
        num+=3;
        mult++;
    }
    return 0;
}**/

//do-while
/**int main(){
    int num = 3, cont = 5;
    setlocale(LC_ALL,"");
    printf("Os %d primeiros m�ltiplos de %d s�o: \n",cont,num);
    do{
      printf("%d ",num);
      num+=3;
    } while (num <= 3*cont);
    return 0;
}**/

