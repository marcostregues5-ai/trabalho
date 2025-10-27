#include <stdio.h>

int main() {
int numero, invertido = 0, resto;

printf("Digite um número inteiro: ");
scanf("%d", &numero);


int original = numero;


while (numero != 0) {
    resto = numero % 10;            
    invertido = invertido * 10 + resto;
    numero = numero / 10;           
}

printf("Número original: %d\n", original);
printf("Número invertido: %d\n", invertido);

return 0;


}