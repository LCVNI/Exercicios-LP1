/*6. Escreva uma função que receba um número e retorne 1 se ele é palíndromo, 0
caso contrário. Não transforme o número em uma string.
*/
#include <stdio.h>

int palindromo(int x) {
    int original = x;
    int invertido = 0;

    while (x > 0) {
        int digito = x % 10;        // pega o último dígito
        invertido = invertido * 10 + digito; // adiciona ao número invertido
        x /= 10;                    // remove o último dígito
    }

    return (original == invertido);
}

int main() {
    int x;
    printf("Informe um número: ");
    scanf("%d", &x);

    if (palindromo(x)) {
        printf("O número %d é palíndromo!\n", x);
    } else {
        printf("O número %d não é palíndromo!\n", x);
    }

    return 0;
}
