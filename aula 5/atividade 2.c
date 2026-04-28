#include <stdio.h>

int main() {
    int vet[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nNúmeros pares: ");
    for(int i = 0; i < 10; i++) {
        if(vet[i] % 2 == 0) {
            printf("%d ", vet[i]);
        }
    }
    return 0;
}