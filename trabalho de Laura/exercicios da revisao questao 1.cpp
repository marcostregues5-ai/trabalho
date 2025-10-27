#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char palavra[100];
int i, vogais = 0, consoantes = 0;

printf("Digite uma palavra: ");
scanf("%s", palavra);  


for (i = 0; i < strlen(palavra); i++) {
    char c = tolower(palavra[i]); 
    if (isalpha(c)) { 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vogais++;
        else
            consoantes++;
    }
}

printf("A palavra '%s' tem %d vogais e %d consoantes.\n", palavra, vogais, consoantes);

return 0;


}