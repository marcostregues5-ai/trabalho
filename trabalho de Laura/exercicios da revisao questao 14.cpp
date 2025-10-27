#include <stdio.h>

int main() {
int matriz[4][4];
int i, j;
int somaDiagonal = 0;


printf("Digite os elementos da matriz 4x4:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("Elemento [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}


for (i = 0; i < 4; i++) {
    somaDiagonal += matriz[i][i];
}

printf("\nMatriz informada:\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("%4d ", matriz[i][j]);
    }
    printf("\n");
}

printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

return 0;


}