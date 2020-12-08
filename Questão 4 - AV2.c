// Fa�a um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazen�-la num vetor. 
//Imprimir a frase lida trocando as vogais, isto �, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. 
//Usar uma fun��o void (procedimento) para realizar a troca e uma fun��o para realizar a impress�o da frase trocada. 
//A fun��o deve ter como par�metro um ponteiro char referente ao vetor.
//Dica: Use a fun��o gets() da biblioteca string.h para realizar a leitura da frase. 
//Use o switch para realizar as trocas. S� considere as letras min�sculas.
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void imprimir(char *vetor){
	int i; char *ponteiro;
	ponteiro= vetor;
	for(i=0; i<strlen(vetor);i++){
		printf("%c",*ponteiro);
		ponteiro++;
	}
}	

void troca(char *vetor){
	int i; 
	for(i=0; i<strlen(vetor); i++){
		switch(vetor[i]){
			case'a':
				vetor[i]= 'u';
				break;
			case'e':
				vetor[i]= 'o';
				break;
			case'i':
				vetor[i]= 'u';
			    break;
			case'o':
				vetor[i]= 'a';
				break;
			case'u':
				vetor[i]= 'e';
				break;
		}
	}
}
		
main(){
	char vetor[100];
	printf("\nDigite uma string: ");
	gets(vetor);
	printf("\n");
	troca(vetor);
	imprimir(vetor);
}

