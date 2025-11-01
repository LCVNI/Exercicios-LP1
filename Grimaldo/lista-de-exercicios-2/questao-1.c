/*
 Questão 1) Faça um programa em C que:
• Aloque dinamicamente um array de 5 números inteiros;
• Peça para o usuário digitar os 5 números no espaço alocado;
• Mostre os 5 números alocados na tela;
• Libere a memória alocada.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    *ptr=(int*) malloc(5 * sizeof(int));
    for(int i=0; i < 5; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d",&ptr[i]);
    }
    printf("Numeros informados: ");
    for(int i=0; i < 5; i++){
        printf("%d,", ptr[i]);
    }
    free(ptr);
    return 0;
}