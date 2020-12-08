// Leia uma matriz 5 x 5. Leia tamb�m um valor  X. O programa devera fazer uma busca desse valor na matriz e, 
//ao final, escrever a localiza��o (linha e coluna) ou uma mensagem de �n�o encontrado�.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int matriz[5][5], linha, coluna, num, achou=0;
	
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<5; coluna++){
			printf("\nPosi��o [%d][%d]: ", linha+1, coluna+1);
			scanf("%d",&matriz[linha][coluna]);		
		}
	}
	printf("\nDigite o valor que deseja buscar: ");
	scanf("%d",&num);
	for(linha=0; linha<5; linha++){
		for(coluna=0; coluna<5; coluna++){
			if(matriz[linha][coluna]==num){
				achou=1;
				printf("\nEste n�mero est� na linha %d e coluna %d ([%d][%d])", linha+1, coluna+1, linha+1, coluna+1);
			}
		}
	}
	if(achou==0){
		printf("\nN�mero n�o encontrado na matriz!");
		}
}

