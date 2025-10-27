#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int N, i;
int somaPares = 0, somaImpares = 0;

printf("Digite a quantidade de números que deseja informar: ");
scanf("%d", &N);

int numeros[N];


int opcao;
printf("Deseja digitar os números (1) ou gerar aleatoriamente (2)? ");
scanf("%d", &opcao);

if (opcao == 1) {
    for (i = 0; i < N; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
} else {
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        numeros[i] = rand() % 100; 
    }
    printf("\Números gerados automaticamente:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}


for (i = 0; i < N; i++) {
    if (numeros[i] % 2 == 0)
        somaPares += numeros[i];
    else
        somaImpares += numeros[i];
}


printf("\nArray de números: ");
for (i = 0; i < N; i++) {
    printf("%d ", numeros[i]);
}

printf("\nSoma dos números pares: %d", somaPares);
printf("\nSoma dos números ímpares: %d\n", somaImpares);

return 0;


}