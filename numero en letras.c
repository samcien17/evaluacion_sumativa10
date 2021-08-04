#include<stdio.h>
#include<math.h>

int main(){
    int num =15,numA=0;
    int pot;
    printf("       LAS REGLAS DEL JUEGO SON ASI\n");
    printf("  si introduces un numero que no sea 15 \n ");
    printf("       te dara su potencia al cubo \n ");
    printf("pero si introduces 15 veras como se escribe\n \n ");
    printf("Introdusca el numero:  ");
    scanf("%d", &numA);
    if(num == numA){
        printf("Quince");
    }else{ pot=pow(numA,3);
    printf("%d",pot);
    }


return 0;

}
