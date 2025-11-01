/*
Questão 2) Faça um programa em C que receba do usuário a quantidade N de números
a ser digitada. Em seguida, o programa deve alocar dinamicamente um vetor de N
inteiros, receber N números do usuário e armazenar no vetor, e mostrar o maior valor do
vetor, o menor valor do vetor e a média dos valores.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Informe quantos numeros quer alocar: ");
    scanf("%d", &n);
    int *ptr=(int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("\nInforme o %d valor: ", i+1);
        scanf("%d", &ptr[i]);
    }
    int maior=ptr[0], menor=ptr[0];
    float soma=0;
    for(int i = 0; i < n; i++){
        soma+=ptr[i];
        if(maior < ptr[i] ){
            maior= ptr[i];
        }
        if(menor > ptr[i] ){
            menor=ptr[i];
        }
    }
    float media= soma/n;
    printf("\nMaior numero do vetor: %d", maior);
    printf("\nMenor numero do vetor: %d",menor);
    printf("\nMedia de valores do vetor: %.2f",media);
    free(ptr);
    return 0;
}