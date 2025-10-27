#include <stdio.h>

int main() {
int matriz[4][4];
int i, j;
int maior;


printf("Digite os elementos da matriz 4x4:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}


printf("\nMatriz informada:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("%4d ", matriz[i][j]);
    }
    printf("\n");
}


printf("\nMaior valor de cada linha:\n");
for (i = 0; i < 4; i++) {
    maior = matriz[i][0]; 
    for (j = 1; j < 4; j++) {
        if (matriz[i][j] > maior)
            maior = matriz[i][j];
    }
    printf("Linha %d: %d\n", i, maior);
}

return 0;


}