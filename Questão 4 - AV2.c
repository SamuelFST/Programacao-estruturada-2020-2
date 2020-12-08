// Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor. 
//Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. 
//Usar uma função void (procedimento) para realizar a troca e uma função para realizar a impressão da frase trocada. 
//A função deve ter como parâmetro um ponteiro char referente ao vetor.
//Dica: Use a função gets() da biblioteca string.h para realizar a leitura da frase. 
//Use o switch para realizar as trocas. Só considere as letras minúsculas.
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

