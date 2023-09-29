#include <stdio.h>

int main() {
    double peso;

    // Solicita ao usuário que insira o peso
    printf("Digite o peso em quilogramas: ");
    scanf("%lf", &peso);

    // Verifica se o peso é menor que 60 kg
    if (peso < 60) {
        printf("O peso é menor que 60 kg.\n");
    } else {
        printf("O peso não é menor que 60 kg.\n");
    }

    return 0;
}