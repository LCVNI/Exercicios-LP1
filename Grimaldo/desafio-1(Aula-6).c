/*Você deve implementar uma função em C chamada encontraExclusivo,
que encontra e retorna o primeiro número que 
aparece no vetor arr1 e não no vetor arr2.
Caso todos os números de arr1 estejam presentes em arr2,
a função deve retornar -1.*/
#include<stdio.h>
int primeiro_exclusivo(int arr1[], int arr2[], int n)
{
    int aux;
    //Ordenar o vetor
    for(int i = 0; i < n-1; i++){
        if(arr1[i] < arr1[i+1]){
            aux=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=aux;
        }
        if(arr2[i] < arr2[i+1]){
            aux=arr2[i];
            arr2[i]=arr2[i+1];
            arr2[i+1]=aux;
        }
    }
    //Comparar valores
    for(int i = 0; i < n; i++){
        if(arr1[i] == arr2[i]){
             continue;
        }
        else{
            return arr1[i];
        }
    }
    return -1;
}
int main(){
    int tam;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tam);
    int arr1[tam], arr2[tam];
    for(int i = 0; i < tam; i++){
        printf("Informe o valor da posicao %d do primeiro vetor: ", i+1);
        scanf("%d", &arr1[i]);
        printf("Informe o valor da posicao %d do segundo vetor: ",i+1);
        scanf("%d", &arr2[i]);
    }
    if(primeiro_exclusivo(arr1, arr2, tam) == -1){
        printf("Nao ha exclusivo\n");

    }
    else{
    printf("Primeiro valor exclusivo: %d\n", primeiro_exclusivo(arr1, arr2, tam));
    }
    return 0;
}