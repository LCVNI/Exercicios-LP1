/*Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0.
Caso seja entrado um número diferente, o programa
deverá solicitar uma nova opção. [Marcelo Cendron, IFC]*/

#include<stdio.h>

int main(){
    int menu;
    do{
        printf("\nEscolha uma opcao:\n1.Yes\n0.No\n");
        scanf("%d", &menu);
    }while(menu != 1 && menu != 0);
    if(menu == 1) printf("Ok! :)\n");
    else if(menu == 0) printf("Own :(\n");
    return 0;
}