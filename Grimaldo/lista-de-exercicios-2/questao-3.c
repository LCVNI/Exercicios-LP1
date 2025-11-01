/*
Questão 3) Faça um programa em C que receba do usuário o tamanho de uma string e
chame uma função para alocar dinamicamente essa string. Em seguida o usuário deverá
informar o conteúdo dessa string e o programa deve imprimir a string sem suas vogais. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("Informe o tamanho da string: ");
    scanf("%d",&n);

    char *ptr=(char*) malloc( n*sizeof(char));

    printf("Informe o conteudo da string: ");
    scanf("%s",ptr);

    //String original:
    printf("String original: %s",ptr);

    char *pos=ptr;
    while ((pos = strchr(ptr, 'a')) != NULL)
        *pos = ' ';
    while ((pos = strchr(ptr, 'e')) != NULL)
        *pos = ' ';
    while ((pos = strchr(ptr, 'i')) != NULL)
        *pos = ' ';
    while ((pos = strchr(ptr, 'o')) != NULL)
        *pos = ' ';
    while ((pos = strchr(ptr, 'u')) != NULL)
        *pos = ' ';

    printf("String sem vogis: %s\n",ptr);
    free(ptr);
    return 0;
}