#include <stdio.h>


int main(){
	
	
	int numero;
	
	printf("Digite o numero:");
	scanf("%f", &numero);
	
	if (numero > 0){
		printf("O numero e positivo.\n");
		
	}
	
	else if(numero < 0){
		printf("O numero e negativo.\n");
		
	}
	
	else{
		printf("O numero e Zero.\n");
		
	
	}
	
	
	
	
	return 0;
}
