#include <stdio.h>

int main() {
int numeros[10];
int i, j;
int contagem[10] = {0};
int jaContado;


printf("Digite 10 números inteiros entre 0 e 20:\n");
for (i = 0; i < 10; i++) {
    do {
        printf("%dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] < 0 || numeros[i] > 20)
            printf("Número inválido! Digite novamente.\n");
    } while (numeros[i] < 0 || numeros[i] > 20);
}


printf("\nFrequência dos números digitados:\n");
for (i = 0; i < 10; i++) {
    jaContado = 0;
    
    for (j = 0; j < i; j++) {
        if (numeros[i] == numeros[j]) {
            jaContado = 1;
            break;
        }
    }
    if (!jaContado) {
        int freq = 0;
        for (j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j])
                freq++;
        }
        printf("Número %d apareceu %d vez(es)\n", numeros[i], freq);
    }
}

return 0;


}