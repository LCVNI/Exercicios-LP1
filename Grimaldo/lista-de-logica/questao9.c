/*9. Faça uma função que retorne o mínimo múltiplo comum (MMC) de dois
números.
*/
#include <stdio.h>

// Função para calcular o MDC (Máximo Divisor Comum)
int MDC(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

// Função para calcular o MMC (Mínimo Múltiplo Comum)
int MMC(int a, int b) {
    return (a * b) / MDC(a, b);
}

int main() {
    int num1, num2;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("MMC entre %d e %d = %d\n", num1, num2, MMC(num1, num2));

    return 0;
}
