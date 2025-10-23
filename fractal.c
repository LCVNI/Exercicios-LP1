/*Dado um inteiro n, monte a seguinte sequência usando apenas laços:

Exemplo (para n = 4):
1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1
Desafio: fazer isso com apenas dois laços (sem if fora deles).
----------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
int main(){
 int n; 
 printf("Informe um numero: ");
 scanf("%d",&n);
 for(int i=1; i <=n; i++){
         for(int j=1; j <= i; j++){
              printf("%d ", j);
              }
      printf("\n");
      if(i == n){
         for(int k=n-1; k >= 1; k--){
             for(int l=1; l <= k; l++){
                  printf("%d ", l);
             }
             printf("\n");
         }
      }
 }       
    printf("\nFinalizado!\n");
system("Pause");
return 0;
}
