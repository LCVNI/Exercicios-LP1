/*Crie um programa que:
Pergunte ao usuário quantos números ele quer armazenar;
Aloque dinamicamente um vetor de inteiros com esse tamanho;
Peça os valores ao usuário e mostre a média no final;
Libere a memória ao terminar.
--------------------------------------------------------|*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, *p;
    printf("Quantos numeros voce quer armazenar?\n");
    scanf("%d", &n);

    p=(int*) malloc(n*sizeof(int));

    for(int i=0; i < n; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &p[i]);
        printf("\n");
    }

    int soma=0;
    printf("Numeros informados: ");
    for(int i=0; i < n; i++){
        printf("%d, ",p[i]);
        soma+= p[i];
    }

    float media= soma/n;
    printf("\nA media dos numeros foi: %.2f", media);
     free(p);
return 0;
}

