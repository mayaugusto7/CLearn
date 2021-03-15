#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    float flo;

    printf("Digite dois numeros: ");
    scanf("%d%f", &num, &flo);

    printf("Numeros: %d e %f\n", num, flo);

    system("pause");
    return 0;
}
