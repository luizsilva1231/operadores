#include <stdio.h>

int main() {
    double salario;
    const double salarioMinimo = 1320.0; // Valor do salário mínimo

    // Solicita ao usuário que insira o salário
    printf("Digite o salário: ");
    scanf("%lf", &salario);

    // Verifica se o salário é maior que o salário mínimo
    if (salario > 1.320) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa não ganha mais que o salário mínimo.\n");
    }

    return 0;
}