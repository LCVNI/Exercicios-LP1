/*2. Faça um programa que leia um número inteiro e diga se ele é perfeito (soma dos
divisores iguais ao número).*/
#include<stdio.h>
int main(){
    int num, soma=0;
    printf("Informe um numero: ");
    scanf("%d",&num);
    for(int i=1; i < num; i++){
        if(num % i == 0){
            soma+=i;
        }
    }
    if(soma == num){
        printf("O numero %d e perfeito", num);
    }
    else{
        printf("O numero %d nao e perfeito", num);
    }
    return 0;
}