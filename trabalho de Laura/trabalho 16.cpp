#include <stdio.h>


int main() {
	
	
    int matriz[3][3];
    int i, j;
    int soma_Linha[3] = {0};
	int soma_Coluna[3] = {0};
    int soma_Diagonal_Principal = 0;
	int soma_Diagonal_Secundaria = 0;
    int magico = 1; 


   
    printf("Digite os numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
    }
    }

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma_Linha[i] += matriz[i][j];
            soma_Coluna[j] += matriz[i][j];
            if (i == j)
                soma_Diagonal_Principal += matriz[i][j];
            if (i + j == 2)
                soma_Diagonal_Secundaria += matriz[i][j];
                
    }
    }

    int soma_Referencia = soma_Linha[0];
    

    for (i = 0; i < 3; i++) {
        if (soma_Linha[i] != soma_Referencia)
            magico = 0;
            
    }

  
    for (j = 0; j < 3; j++) {
        if (soma_Coluna[j] != soma_Referencia)
            magico = 0;
            
            
    }

 
    if (soma_Diagonal_Principal != soma_Referencia || soma_Diagonal_Secundaria != soma_Referencia)
        magico = 0;

    if (magico)
        printf("A matriz e um quadrado magico.\n");
        
    else
        printf("A matriz nao e um quadrado magico.\n");
        
        

    return 0;
}