/*Crie um algoritmo em C que leia um número inteiro
positivo e calcule o fatorial desse número.*/

#include<stdio.h>
int main(){
    int n;
    int fat=1;
    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        fat*=i;
    }
    printf("Fatorial de %d: %d", n, fat);
    return 0;
}