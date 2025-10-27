#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int vetor[50];
int unicos[50];
int i, j, k = 0;
int repetido;


srand(time(NULL));


for (i = 0; i < 50; i++) {
    vetor[i] = rand() % 11; 
}


printf("Vetor original:\n[ ");
for (i = 0; i < 50; i++) {
    printf("%d ", vetor[i]);
}
printf("]\n");


for (i = 0; i < 50; i++) {
    repetido = 0;
    for (j = 0; j < k; j++) {
        if (vetor[i] == unicos[j]) {
            repetido = 1;
            break;
        }
    }
    if (!repetido) {
        unicos[k] = vetor[i];
        k++;
    }
}


printf("\nVetor sem números repetidos:\n[ ");
for (i = 0; i < k; i++) {
    printf("%d ", unicos[i]);
}
printf("]\n");

return 0;


}