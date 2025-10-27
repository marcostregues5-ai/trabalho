#include <stdio.h>

int main() {
int numero;
int contador = 0;
int tempo;

printf("Digite um número inteiro positivo: ");
scanf("%d", &numero);


if (numero <= 0) {
    printf("Por favor, digite um número inteiro POSITIVO.\n");
    return 1; 
}

tempo = numero;


while (tempo != 0) {
    tempo = tempo / 10;
    contador++;
}

printf("O número %d tem %d dígitos.\n", numero, contador);

return 0;


}