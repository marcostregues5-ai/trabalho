#include <stdio.h>


int main(){
	
	
	char palavra[100];
	int i = 0, j, palindromo = 1;
	
	
	printf("Digite a palavra:");
		scanf("%s", palavra);
		
		
		while(palavra[i] != '\0'){
			i++;
			
		}
		
		
		j = i - 1;
		i = 0;
		
		
		while(i < j){
			if (palavra[i] != palavra[j]){
				palindromo = 0;
				break;
			}
			
			i++;
			j--;
			
		}
	
	if(palindromo)
	
	printf("A palavra e palindromo.");
	
	
	else
	printf("A palavra nao e palindromo.");
	
	
	
	
	
	return 0;
}