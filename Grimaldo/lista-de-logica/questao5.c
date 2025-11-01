/*5. Faça um programa que leia uma idade e retorne a faixa etária (“criança”,
“adolescente”, “adulto”, “idoso”) usando if-else encadeado.
*/

#include<stdio.h>

int main(){
    int idade;
    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    if(idade < 12){
        printf("\nCrianca");
    }
    else if(idade < 17){
        printf("Adolescente");
    }
    else if(idade < 70){
        printf("Adulto");
    }
    else if(idade < 120){
        printf("Idoso");
    }
    else if(idade > 120){
        printf("Matusalem");
    }
    return 0;
}