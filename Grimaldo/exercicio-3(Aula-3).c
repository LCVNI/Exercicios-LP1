/*Escreva um programa em C que leia um número inteiro
e exiba todos os números ímpares de 1 até esse número.*/

#include<stdio.h>
 int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("Numeros impares entre 1 e %d:\n", n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0) printf("%d\n", i);
    }
    return 0;
 }