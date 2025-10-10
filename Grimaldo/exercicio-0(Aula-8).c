/*Exercício 0: escreva uma função que recebe um
ponteiro para um inteiro e dobra seu valor*/

#include<stdio.h>
void dobraValor(int *ptr){
   *ptr= *ptr * 2;
}
int main(){
  int x;
  printf("Informe um inteiro qualquer: ");
  scanf("%d",&x);
  dobraValor(&x);
  printf("Dobro do valor: %d",x);
return 0;
}
