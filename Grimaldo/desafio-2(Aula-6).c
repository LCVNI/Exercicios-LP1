/*Desafio: Encontrar a soma dos três menores números de um vetor*/
#include<stdio.h>
int soma_tres_menores(int arr[], int n)
{
    int aux;
    //Ordenar o vetor
    for(int i = 0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i] >= arr[j]){
                aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
        }
    }
    //Somar os 3 menores
    int soma = 0;
    for(int i = 0; i < 3; i++){
        soma+= arr[i];
    }
    return soma;
}
int main(){
    int arr[5]={76, 5, 7, 2, 1};
    printf("Soma dos menores: %d\n", soma_tres_menores(arr, 5));
    return 0;
}
