//Crie um programa que tenha um menu:
//1- Entrar com novos dados
//2- Listar dados
//3- Sair
//Ao selecionar a opção 1, os dados de um aluno devem ser armazenados em uma tabela(vetor de registros e em um arquivo),
// cada registro deve ser criado dinamicamente.
//Ao selecionar a opção 2, será listado todos os registros.
//Ao selecionar a opção 3, o programa deverá ser encerrado

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h> 
#include<locale.h>
#define tamanho 40

main(){
	typedef struct{
		int nome[tamanho], curso[tamanho], matricula[tamanho];
	} A;
	
	A *dados;
	
	int i, a, op, qnt;
	setlocale(LC_ALL, "portuguese");
 	printf("\n1 - Novo cadastro\n");
 	do{
 	printf("2 - Listar cadastros\n");
 	printf("3 - Sair\n");
 	printf("Selecione uma opção: ");
 	scanf("%d",&op);
 	system("cls");
 	
 	switch(op){
 		case 1:
 			printf("\nDigite quantos cadastros deseja fazer: ");
 			scanf("%d",&qnt);
 			dados= (A*) malloc(qnt *sizeof(A));
 			if(!dados)
			 {
			 	printf("Erro na alocação");
			 	exit(1);
			 }
 	
 			for(a=0; a<qnt; a++){
 				printf("\n*** Cadastro %d ***\n",a+1);
 				printf("\nDigite seu nome: ");
 				scanf("%s",&dados[a].nome);
 				fflush(stdin);
 				printf("\nDigite sua matrícula: ");
 				scanf("%s",&dados[a].matricula);
 				fflush(stdin);
 				printf("\nDigite seu curso: ");
 				scanf("%s",&dados[a].curso);
 				fflush(stdin);
 				system("cls");
			}
			
			FILE *pont_arq;
 			pont_arq= fopen("Dados_do_aluno.txt","w");
 			
			for(a=0; a<qnt; a++){
 				fprintf(pont_arq, "Nome: %s | Matrícula: %s | Curso: %s\n", dados[a].nome, dados[a].matricula, dados[a].curso);
				}
			fclose(pont_arq);
			
 			break;
 			
 		case 2:
 			printf("\nDados cadastrados: \n");
 			for(a=0; a<qnt; a++){
 				printf("\nNome: %s | Matricula: %s | Curso: %s", dados[a].nome, dados[a].matricula, dados[a].curso);
			 }
 			break;
 			
 		case 3:
 			printf("\nVocê escolheu sair");
 			exit(1);
 			break;
 			
 		default:
 			printf("Erro");
 			break;
		}
	printf("\n\nDigite 1 para voltar ao menu ou 2 para sair: ");
    scanf("%d", &op);
    printf("\n");
  	
  }while (op==1); 
  if(op==2){
  	printf("\nVocê escolheu sair");
 	exit(1);
  }
}
