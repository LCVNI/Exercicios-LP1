/*Faça um programa em C que leia uma sequência de números inteiros
(a sequência termina quando o usuário digitar um número negativo)
e exiba o maior número digitado.*/
#include<stdio.h>
int main(){
    int n, maior=0;
    while(1){
        printf("Informe um numero: ");
        scanf("%d", &n);
        if(n < 0) break;
        if(n > maior) maior = n;
    }
    printf("\nO maior numero digitado e: %d", maior);
    return 0;
}