#include <stdio.h>

int main() {
int numeros[8];
int i, j, temp;


printf("Digite 8 números inteiros:\n");
for (i = 0; i < 8; i++) {
    printf("%dº número: ", i + 1);
    scanf("%d", &numeros[i]);
}


for (i = 0; i < 8 - 1; i++) {
    for (j = i + 1; j < 8; j++) {
        if (numeros[i] < numeros[j]) {
            temp = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = temp;
        }
    }
}


printf("Numeros em ordem decrescente:\n[ ");
for (i = 0; i < 8; i++) {
    printf("%d ", numeros[i]);
}
printf("]\n");

return 0;


}