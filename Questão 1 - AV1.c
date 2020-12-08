//Desenvolva um programa que receba o nome, peso e altura de 5 pessoas (utilize um vetor de registro),
//ao final exiba os dados de cada pessoa, seguido de seu IMC (Índice de Massa Corporal)  e seu Significado.
//Menos do que 18,5 = Abaixo do peso
//Entre 18,5 e 24,9	= Peso normal
//Entre 25 e 29,9 =	Sobrepeso
//Entre 30 e 34,9 =	Obesidade grau 1

//O Cálculo do IMC deve ser feito em uma função.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h> 
#define tamanho 30
void CalcularIMC();

typedef struct{
	char nome[tamanho];
	float peso, altura;
	} H;
	
	H pessoa[tamanho];

main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for(i=0; i<5; i++){
		printf("\nObs: Use vírgula para separação de valores, como: \n"); 
		printf("quilos e gramas, metros e centímetros.\n");
		printf("\nCadastro da pessoa %d",i+1);
		printf("\nDigite seu nome: ");
		scanf("%s",&pessoa[i].nome);
		printf("Digite seu peso: ");
		scanf("%f",&pessoa[i].peso);
		fflush(stdin);
		printf("Digite sua altura: ");
		scanf("%f",&pessoa[i].altura);
		fflush(stdin);
		system("cls");
	}
	CalcularIMC();
}

void CalcularIMC(){
	    int i;  
		for(i=0; i<5; i++){
			float IMC;
		    IMC= pessoa[i].peso/((pessoa[i].altura)*2);
			printf("\nNome e IMC da pessoa %d \n",i+1);
			printf("\Nome: %s",pessoa[i].nome);
			printf(" | IMC: %.2f\n",IMC);
			if((IMC<18.5) && (IMC>0)){
				printf("Você está abaixo do peso.\n");
			}
			if((IMC<25) && (IMC>18.4)){
				printf("Você está com peso normal.\n");
			}
			if((IMC<30) && (IMC>24.9)){
				printf("Você está com sobrepeso.\n");
			}
			if((IMC<35) && (IMC>29.9)){
				printf("Você está com obesidade grau 1.\n");
			}
		}
	}
