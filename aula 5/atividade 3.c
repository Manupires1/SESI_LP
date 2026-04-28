#include <stdio.h>

int main() {
    int num, soma = 0;
    for(int i = 0; i < 8; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma total é: %d\n", soma);
    return 0;
}