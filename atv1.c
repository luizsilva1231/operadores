#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário que insira a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Verifica se a pessoa é maior de idade
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa não é maior de idade.\n");
    }

    return 0;
}