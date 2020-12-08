//Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. 
//Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
//sendo que caso o usuário digite um número que já foi digitado anteriormente, 
//o programa deverá pedir para ele digitar outro número.
//Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
//verificando se ele existe entre os números que já foram  fornecidos. 
//Exibir na tela o vetor final que foi digitado.

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[10], num, i, a;
	
	for(i=0; i<10;i++){
		printf("\nDigite um número para a posição %d: ",i+1);
		scanf("%d",&num);
		for(a=0; a<i; a++){
		if(vetor[a]==num){
			while(vetor[a]==num){
			system("cls");
			printf("\nNúmero já digitado anteriormente. Digite outro número: ");
			scanf("%d",&num);
			}
		  }
		}
		vetor[i]= num;
	}
	printf("\nNúmeros digitados: ");
	for(i=0; i<10; i++){
		printf("| %d |",vetor[i]);
	}
} 

