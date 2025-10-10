/*Desenvolva uma função em C que, dado um array de inteiros,
calcule e retorne o produto de todos os seus elementos.
Escreva um teste para comprovar o funcionamento*/

#include<stdio.h>
int multiplicar(int vet[], int tam){
    int mult=1;
      for(int i=0; i < tam; i++){
        mult*=vet[i];
      }  
      return mult;    
}
int main(){
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    int numeros[n];
    for(int i=0; i < n; i++){
        printf("Informe o numero da posicao %d do vetor: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("\nProduto de todos os numeros: %d\n", multiplicar(numeros, n));
    return 0;
}