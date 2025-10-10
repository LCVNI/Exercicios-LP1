/*Objetivo: Escreva uma função que inverta os elementos de um array. 
Escreva um teste para comprovar o funcionamento. 
Escreva um teste para comprovar o funcionamento*/

#include<stdio.h>
void inverter(int vet[],int  tam){

    for(int i = tam-1; i >= 0; i--){
        printf("%d, ", vet[i]);
    }
}
int main(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for(int i = 0; i < tam; i++){
        printf("Informe o valor da posicao %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Vetor invertido: ");
    inverter(vet, tam);
    return 0;
}