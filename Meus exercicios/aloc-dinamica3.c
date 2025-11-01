/*Faça um programa que:
Peça 5 nomes (strings pequenas, até 20 caracteres);
Depois, pergunte se o usuário quer adicionar mais nomes;
Se sim, use realloc() para expandir o vetor e continue lendo novos nomes;
Mostre todos os nomes no final.
-----------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char nomes[20];
    int n=5, *p;
    
    for(int i=0; i < 5; i++){
        printf("Informe o %d nome: ", i+1);
        scanf("%s",&nomes[i]);
    }
    for(int i=0; i < 5; i++){
        printf("\nNome %d:%s ", i+ 1, nomes[i]);
    }
    char resp;
    do{
    printf("\nDeseja incluir mais nomes?\n (s/n)");
    scanf(" %c",&resp);
    if(resp == 's'){
        int n, *p;
        printf("\nInforme quantos nomes voce quer incluir: ");
        scanf("%d",n);
        p=(int*) malloc(n *)
    }
    else if(resp == 'n'){
        printf("\nConcluido!");
    }
    else{
        printf("\nOpcao invalida");
    }

}while(resp != 's' && resp != 'n');
    return 0;
}