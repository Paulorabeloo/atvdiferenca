#include <stdio.h>
int main() {
    int A, B, C, D, diferenca;
    printf("Digite o valor de A:\n");
    printf("Digite o valor de B:\n");
    printf("Digite o valor de C:\n");
    printf("Digite o valor de D:\n");
    scanf("%i%i%i%i", &A, &B, &C, &D);
    diferenca = (A * B) - (C * D);
    printf("O valor da diferenca é: %i", diferenca);
return 0;
}
