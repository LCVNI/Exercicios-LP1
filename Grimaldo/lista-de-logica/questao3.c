/*Escreva um programa que leia um inteiro N e exiba todos os números primos até
N.*/
#include<stdio.h>
int main(){
    int n, cont;
    printf("Informe um numero: ");
    scanf("%d",&n);
    printf("Numeros primos ate %d: 1, ", n);
    for(int i=1; i < n; i++){
        cont=0;
        for(int j=1; j <= n; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d, ", i);
        }
    }
    return 0;
}