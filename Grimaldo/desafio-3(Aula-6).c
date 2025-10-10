/*Dado um vetor de inteiros e um número inteiro n,
escreva um programa que rotacione
o vetor para a esquerda por n posições.
A rotação para a esquerda desloca cada elemento do vetor
n posições para frente, e os elementos que “saem” pelo início
devem ser colocados no final do vetor.*/
#include<stdio.h>
void rotacionar(int arr[], int n, int nrot)
{
    int aux[n];
    for(int  i = 0; i < n; i++){
        if(i - nrot < 0){
            aux[i - nrot + n]=arr[i];
        }
        else{
            aux[i-nrot]=arr[i];
        }
    }
    for(int i=0; i < n; i++){
        arr[i]=aux[i];
    }
}
int main(){
    int arr[5]={1, 2, 3, 4, 5};
    rotacionar(arr, 5, 2);
    printf("Rotacionado: ");
    for(int i=0; i < 5; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
