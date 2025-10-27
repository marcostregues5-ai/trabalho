#include <stdio.h>

int main() {
int numeros[10];
int i, j;
int repetido;


printf("Digite 10 números inteiros:\n");
for (i = 0; i < 10; i++) {
    printf("%dº número: ", i + 1);
    scanf("%d", &numeros[i]);
}

printf("\nNúmeros que não se repetem:\n");


for (i = 0; i < 10; i++) {
    repetido = 0; 

    for (j = 0; j < 10; j++) {
        if (i != j && numeros[i] == numeros[j]) {
            repetido = 1; 
            break;
        }
    }

    if (!repetido)
        printf("%d ", numeros[i]);
}

printf("\n");

return 0;


}