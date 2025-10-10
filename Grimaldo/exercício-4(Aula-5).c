/*Objetivo: Escreva uma função que encontre o segundo 
maior elemento em um array de inteiros. 
Escreva um teste para comprovar o funcionamento.*/
#include<stdio.h>
int segundoMaior(int vet[], int tam){
    int maior=0, seg=0;
    for(int i = 0; i < tam; i++){
        if(vet[i] > maior){
            maior=vet[i];
            }
        if(seg < maior){
            seg=vet[i];
        }
    }
    return seg;
}

int main(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for(int i=0; i < tam; i++){
        printf("Informe o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("O segundo maior numero do vetor e: %d", segundoMaior(vet, tam));
    return 0;
}