#include <stdio.h>

int main() {
    int num[10];
    int i, maior;

    printf("Programa para encontrar o maior valor entre 10 números\n\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &num[i]);
    }
    maior = num[0];

    for (i = 1; i < 10; i++) {
        if (num[i] > maior) {
            maior = num[i];
        }
    }

    printf("\nO maior número digitado foi: %d\n", maior);

    return 0;
}