/*8. Dado A e B, imprima os múltiplos de A no intervalo [min(A,B), max(A,B)] sem
usar divisão inteira; use somas sucessivas
*/
#include<stdio.h>

void imprimeMultiplos(int min, int max){ // Funcao que generaliza o minimo e o maximo
    printf("Multiplos de %d ate %d --> ", min, max);
    for(int i=min; i <= max; i+=min){
        printf("%d, ", i);
    }
}

int main (){
int num1, num2;
printf("Informe o primeiro numero: ");
scanf("%d",&num1);
printf("Informe o segundo numero: ");
scanf("%d",&num2);

if(num1 > num2){ //Condicao para saber o que passar como parametro
    imprimeMultiplos(num2, num1);
}
else{
    imprimeMultiplos(num1, num2);
}
return 0;
}