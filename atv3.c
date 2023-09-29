#include <stdio.h>

int main() {
    double altura;

    // Solicita ao usuário que insira a altura
    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);

    // Verifica se a altura é maior que 1.8 metros
    if (altura > 1.8) {
        printf("A pessoa é mais alta que 1.8 metros.\n");
    } else {
        printf("A pessoa não é mais alta que 1.8 metros.\n");
    }

    return 0;
}