/*Objetivo: Escreva uma função que encontre e retorne o
maior valor em um array de inteiros.
Escreva um teste para comprovar o funcionamento*/

#include<stdio.h>
int maior(int vet[], int tam){
    int maior=vet[0];
    for(int i = 1; i < tam; i++){
        if(vet[i] > maior) maior = vet[i];
    }
    return maior;
}
int main(){
    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for(int i = 0; i < tam; i++){
        printf("Informe o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("O maior numero do vetor e: %d", maior(vet, tam));
    return 0;
}