/*Implemente uma função que receba um número e retorne a soma de seus
dígitos pares.*/

#include <stdio.h>

int soma_digitos_pares(int n) {
    int soma = 0, digito;

    while (n > 0) {
        digito = n % 10;  // pega o último dígito
        if (digito % 2 == 0) {
            soma += digito;
        }
        n /= 10;  // remove o último dígito
    }
    return soma;
}

int main() {
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("Soma dos digitos pares: %d\n", soma_digitos_pares(n));
    return 0;
}