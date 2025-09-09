/*Programa que diz quantos primos existem entre
dois números ditos pelo usuário*/

#include<stdio.h>
#include<stdlib.h>
int eprimo(int x){//Função que indica se o número é primo
    int cont=0;
    for(int i=1; i<=x; i++){
    if(x % i==0){
         cont++;
         }
    }
    if(cont == 2){
        return 1;
            }
    else{
         return 0;
         }
    }
int limites(int a, int b){//Função que generaliza os limites e imprime todos os números primos
    int resp;
    for(int i=b; i<=a; i++){
     eprimo(i);
     resp=eprimo(i);
     if(resp){
              printf("%d\n",i);
              }
     }
            
}
int main(){
    int l1, l2;
  //Entrada de Dados
    printf("Insira o primeiro limite: ");
    scanf("%d", &l1);
    printf("\nInsira o segundo limite: ");
    scanf("%d",&l2);
   if(l1>l2){
        printf("Numeros primos entre %d e %d:\n",l2, l1);
      limites(l1,l2);
      }
   else{
        printf("Numeros primos entre %d e %d:\n",l1, l2);
        limites(l2, l1);
        }
    system("Pause");
}
