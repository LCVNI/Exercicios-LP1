/*7. Crie um programa que calcule o fatorial de um número usando for e recursão.
Compare os resultados.
*/
#include<stdio.h>
//Utilizando recursao
int fator=1;
int fatorial(int n){
    if(n <= 1){
        return fator;
    }
    fator*=n;
    n--;
    fatorial(n);
    }
int main(){
    int n, fat=1;
    printf("Informe um numero: ");
    scanf("%d",&n);

    //Utilizando for
    for(int i=n; i >= 1; i--){
        fat*=i;
    }
    printf("Fatorial de %d com for --> %d", n, fat);
    printf("\nFatorial de %d com recursao --> %d",n, fatorial(n));
    return 0;
}