#include <stdio.h>

int main() {
int numeros[10];
int i;
int maior, menor;
int posMaior = 0, posMenor = 0;

printf("Digite 10 números inteiros:\n");
for (i = 0; i < 10; i++) {
    printf("%dº número: ", i + 1);
    scanf("%d", &numeros[i]);
}

maior = menor = numeros[0];


for (i = 1; i < 10; i++) {
    if (numeros[i] > maior) {
        maior = numeros[i];
        posMaior = i;
    }
    if (numeros[i] < menor) {
        menor = numeros[i];
        posMenor = i;
    }
}


printf("\nArray de números: [ ");
for (i = 0; i < 10; i++) {
    printf("%d ", numeros[i]);
}
printf("]\n");

printf("Maior valor: %d (posicao %d)\n", maior, posMaior);
printf("Menor valor: %d (posicao %d)\n", menor, posMenor);

return 0;


}