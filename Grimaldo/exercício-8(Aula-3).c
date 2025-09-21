/*Escreva um algoritmo em C que leia uma série de números inteiros
(a entrada termina quando o número 0 é digitado)
e exiba a soma desses números.*/

#include<stdio.h>
int main(){
    int n, soma=0;
    while (1){
        printf("Informe um numero: ");
        scanf("%d", &n);        
        if(n == 0){
            break;
        }
        soma+=n;
    }
    printf("A soma de todos esse numeros e: %d", soma);
    return 0;
}