#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//for
/**int main(){
    int num;
    setlocale(LC_ALL,"");
    for (num = 10; num >= 0; num--){
        printf("%d\n",num);
    }
    printf("FIM!");
    return 0;
}**/


//while
/**int main(){
    int num = 10;
    setlocale(LC_ALL,"");
    while (num >= 0){
        printf("%d\n",num);
        num--;
    }
    printf("FIM!");
    return 0;
}**/

//do-while
/**int main(){
    int num = 10;
    setlocale(LC_ALL,"");
    do{
        printf("%d\n",num);
        num--;
    } while(num>=0);
    printf("FIM!");
    return 0;
}**/

//if
/**int main(){
    int num = 10;
    setlocale(LC_ALL,"");
    while (num){
        printf("%d\n",num);
        num--;
    }
    if (num == 0)
        printf("%d\n",num);
    printf("FIM!");
    return 0;
}**/
