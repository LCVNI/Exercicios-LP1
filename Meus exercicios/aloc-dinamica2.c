/*Escreva um código que:
Aloca dinamicamente um vetor de 1000 inteiros;
Verifica se malloc() retornou NULL;
Exibe "Erro: memória insuficiente!" se falhar, ou "Alocação bem-sucedida!" se der certo.
--------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *p;
    p=(int*) malloc(1000 * sizeof(int));
    if(p == NULL){
        printf("Memoria nao pode ser alocada");
        return 1;
    }
    else{
        printf("Memoria alocada com sucesso!");
    }
    free(p);
    return 0;
}