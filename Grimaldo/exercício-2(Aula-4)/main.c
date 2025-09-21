#include<stdio.h>
#include<stdlib.h>
#include"calculadora.h"
int main(){
    float x, y;
    int menu;
    do{
    printf("Informe a operacao desejada\n 1.Soma\n 2.Subtracao");
    scanf("%d",&menu);
    printf(" Informe o primeiro operando: ");
    scanf("%f", &x);
    printf("Informe o segundo operando: ");
    scanf("%f",&y);
    if(menu != 1 && menu != 2) printf("Opcao invalida!");
    }while(menu != 1 && menu != 2);

    if(menu == 1) printf("O resultado e: %.2f ", somar(x, y));
    else if( menu == 2) printf("O resultado e: %.2f ", subtrair(x, y));
    system("Pause");
    return 0;
}
