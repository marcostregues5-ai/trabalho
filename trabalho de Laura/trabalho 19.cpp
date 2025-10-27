#include <stdio.h>

int main(){
	
	char palavra [100];
	int i = 0, j = 0;
	
	printf("Digite a palavra:");
	scanf("%s", palavra);
	
	 while (palavra[i] != '\0'){
		
		if (palavra[i] == 'a' || palavra[i] == 'A'){
				j++;
		}
		
		i++ ;
		
	}
	
	printf("A palavra tem %d letras a .", j);
	
	
	
	
	return 0;
}