/*Tarefa: Escreva duas macros, MIN(x, y) e MAX(x, y), que retornem
o mínimo e o máximo de dois valores x e y, respectivamente.
Use essas macros em um programa para encontrar o mínimo
e o máximo de diferentes pares de números.*/
#include<stdio.h>
#define MIN(x, y) x < y ? x : y
#define MAX(x, y) x > y ? x : y
int main(){
    int a, b;
    printf("\nInforme o valor de a: ");
    scanf("%d", &a);
    printf("\nInfrome o valor de b: ");
    scanf("%d", &b);
    printf("\nO minimo e: %d", MIN(a, b));
    printf("\nO maximo e: %d", MAX(a, b));
    return 0;
}