/*Leia um número inteiro n e gere uma sequência
“espelhada” dos n primeiros números primos.*/
#include<stdio.h>
#include<stdlib.h>
void espelhar(int n){
    int cont=0, primos=0, i, j,k;

    for(i=1; primos < n; i++){
        for(j=1; j <= i; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d", i);
            primos++;
        }
        cont=0;
    }
    printf(" / ");
    // Espelhado
    for(; i > 1; i--){
        for(k=1; k <= i; k++){
            if(i % k == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d", i);
        }
        cont=0;
    }
}

int main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    printf("\n");
    espelhar(n);
    printf("\n");
    system ("Pause");
    return 0;
}
    
  
