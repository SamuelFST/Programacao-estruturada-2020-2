//Desenvolva um programa que receba o nome, sexo e idade de dez pessoas. 
//O programa deve exibir um menu para busca por sexo ou por idade.  
//1 - Sexo
//2 - Idade
//3 - Sair

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#define tamanhovetor 10
#define tamanho 30

main(){
	setlocale(LC_ALL, "portuguese");
	
	typedef struct{
	char nome[tamanho], sexo;
	int idade;
	} H;
	
	H pessoa[tamanhovetor];
	int i, a, op1, op2=0;
	
	for(i=0; i<tamanhovetor; i++){
		printf("\nDigite seu nome: ");
		scanf("%s",&pessoa[i].nome);
		fflush(stdin);
		printf("Digite sua idade: ");
		scanf("%d",&pessoa[i].idade);
		fflush(stdin);
		printf("Digite seu sexo(M ou F): ");
		scanf("%c",&pessoa[i].sexo);
		pessoa[i].sexo= toupper(pessoa[i].sexo);
		printf("\n");
	} 
	system("cls");
	
	printf("-----------------------------------\n");
	printf("Digite 1 para fazer busca por sexo\n");
	printf("Digite 2 para fazer busca por idade\n");
	printf("Digite 3 para sair do programa\n");
	printf("-----------------------------------\n");
	
	printf("\nDigite uma das opções listadas acima: ");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("\n 1- Buscar por Masculino | 2- Buscar por Feminino: ");
			scanf("%d", &op1);
			char S= op1;
			if (S==2){
				S= 'F';
			}else{
				S = 'M';
			}
			
			switch(S){
			case 'F':
				printf("\nLista de pessoas do sexo feminino: \n");
				break;
			
			case 'M':
				printf("\nLista de pessoas do sexo masculino: \n");
			break;
				
			default:
			break;
		}
		
		for (i=0; i<tamanhovetor; i++){
		if(S==pessoa[i].sexo){
			printf("\nNome: %s", pessoa[i].nome);
			}	
		}	
		break;
		
		case 2:
			printf("\nDigite a idade a ser buscada: ");
			scanf("%d", &op2);
			printf("\nLista das pessoas com essa idade: \n");
			for(i=0; i<tamanhovetor; i++){
				if(op2 == pessoa[i].idade){
					printf("\nNome: %s", pessoa[i].nome);
				}
			}
			break;
			
		case 3:
			printf("\nPrograma encerrado");
			break;
			
		default:
			printf("\nErro: opção não encontrada");
			break;
			
	}
}
