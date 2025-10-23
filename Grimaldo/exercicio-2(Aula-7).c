/*Crie uma struct que represente um aluno com os seguintes campos:
nome, matricula (um número inteiro) e nota (um valor float).
Escreva um programa que permita:
Adicionar alunos a um array.
Exibir todos os alunos com seus detalhes.
Pesquisar um aluno pelo número de matrícula e exibir seus detalhes.*/
//--------------------------------------------------------------------||

#include<stdio.h>
#define TAM_ARR 3 

typedef struct {
    char nome[88];
    int matricula;
    float nota;
} alunos[TAM_ARR];

void adicionarAluno(){

    for(int i=0; i < TAM_ARR; i++){
        alunos{

        }
    }
}

int main(){
    alunos lp1;
    int menu;
    do{
     printf("Informe a operacao desejada:\n");
     printf("1.Adicionar aluno\n");
     printf("2.Pesquisar aluno\n");
     printf("3.Exibir Todos os alunos\n");
     printf("4.Sair");
     scanf("%d",&menu);
     if(menu < 1 || menu > 4){
        printf("Opcao Invalida, Tente de novo!");
     }

     } while(menu != 4);


    return 0;
}