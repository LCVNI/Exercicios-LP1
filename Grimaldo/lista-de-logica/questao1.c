/*1. Escreva um programa que leia três números e imprima o maior sem usar
operadores lógicos compostos.
a. Operadores lógicos compostos:
e.g. (x > 5 && y < 10) || (z != 3 || (o > 9))*/

#include<stdio.h>
int main(){
    int num[3], maior=0;
    for(int i=0; i < 3; i++){
        printf("Informe o %d numero: ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0; i < 3; i++){
        if(num[i] > maior){
            maior=num[i];
        }
    }
    printf("Maior numero: %d", maior);
    return 0;
}