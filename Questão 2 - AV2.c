//Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor. 
//Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos,
//sendo que caso o usu�rio digite um n�mero que j� foi digitado anteriormente, 
//o programa dever� pedir para ele digitar outro n�mero.
//Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, 
//verificando se ele existe entre os n�meros que j� foram  fornecidos. 
//Exibir na tela o vetor final que foi digitado.

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[10], num, i, a;
	
	for(i=0; i<10;i++){
		printf("\nDigite um n�mero para a posi��o %d: ",i+1);
		scanf("%d",&num);
		for(a=0; a<i; a++){
		if(vetor[a]==num){
			while(vetor[a]==num){
			system("cls");
			printf("\nN�mero j� digitado anteriormente. Digite outro n�mero: ");
			scanf("%d",&num);
			}
		  }
		}
		vetor[i]= num;
	}
	printf("\nN�meros digitados: ");
	for(i=0; i<10; i++){
		printf("| %d |",vetor[i]);
	}
} 

