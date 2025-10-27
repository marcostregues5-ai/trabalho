#include <stdio.h>

int main() {
int v1[5], v2[5];
int i;
int resultado = 0;


printf("Digite os 5 elementos do primeiro vetor:\n");
for (i = 0; i < 5; i++) {
    printf("v1[%d]: ", i);
    scanf("%d", &v1[i]);
}


printf("Digite os 5 elementos do segundo vetor:\n");
for (i = 0; i < 5; i++) {
    printf("v2[%d]: ", i);
    scanf("%d", &v2[i]);
}


for (i = 0; i < 5; i++) {
    resultado += v1[i] * v2[i];
}

printf("\nO produto escalar dos vetores é: %d\n", resultado);

return 0;


}