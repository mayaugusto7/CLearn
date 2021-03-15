#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello C\n");
    char letra = 'a';
    int n = 10;
    float dec = 5.25f;

    printf("%c \n", letra);
    printf("%d \n", letra);
    printf("%d \n", n);
    printf("%f \n", dec);

    printf("Letra %c, inteiro %d \n", letra, n);
    printf("Nro: %d; nro+1: %d \n", n, n + 1);

    system("pause");

    return 0;
}
