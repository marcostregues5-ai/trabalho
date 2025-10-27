#include <stdio.h>

int main() {
int numero1, numero2, i, inicio, fim;

printf("Digite o primeiro número inteiro: ");
scanf("%d", &numero1);

printf("Digite o segundo número inteiro: ");
scanf("%d", &numero2);


if (numero1 < numero2) {
    inicio = numero1;
    fim = numero2;
} else {
    inicio = numero2;
    fim = numero1;
}

printf("Números inteiros entre %d e %d:\n", inicio, fim);

for (i = inicio + 1; i < fim; i++) {
    printf("%d ", i);
}

printf("\n");

return 0;


}