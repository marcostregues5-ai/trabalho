#include <stdio.h>

int main() {
int matriz[3][3];
int i, j;
int somaLinha, maiorSoma;
int linhaMaiorSoma = 0;


printf("Digite os elementos da matriz 3x3:\n");
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}


maiorSoma = 0;
for (j = 0; j < 3; j++) {
    maiorSoma += matriz[0][j];
}


for (i = 1; i < 3; i++) {
    somaLinha = 0;
    for (j = 0; j < 3; j++) {
        somaLinha += matriz[i][j];
    }
    if (somaLinha > maiorSoma) {
        maiorSoma = somaLinha;
        linhaMaiorSoma = i;
    }
}


printf("Matriz informada:\n");
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        printf("%4d ", matriz[i][j]);
    }
    printf("\n");
}

printf("Linha com a maior soma: %d (Soma = %d)\n", linhaMaiorSoma, maiorSoma);

return 0;


}
