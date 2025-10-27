#include <stdio.h>

int main(){
	
	
	int matriz [5] [5];
	int i,j;
	
	for(i = 0; i < 5; i++ ) {
	for(j = 0; j < 5; j++) {
		matriz [i] [j] = 0;
		
	}
	}
	
	int centro = 2;
	
	for(i = 0; i < 5; i++){
		matriz [centro] [i] = 1;
		matriz [i] [centro] = 1;
		
	}
	
		for(i = 0; i < 5; i++){
	    for(j = 0; j < 5; j++){
	    	
	    	printf("%d ", matriz[i] [j]);
		}	
		
		printf("\n");
		}
	
	
	
	
	
	
	return 0;
}