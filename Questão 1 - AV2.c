//Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores  impares de v para v1,
//e os valores pares de v para v2 que terão seus tamanhos modificados dinamicamente. 
//No final escreva os elementos UTILIZADOS de v1 e v2.

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h> 
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int i, v[10], *v1, *v2, contador1=1, contador2=1;
	for(i=0; i<10; i++){
	printf("\nDigite um número inteiro: ");
	scanf("%d",&v[i]);
	if(v[i]%2==0){
		contador2++;
		}else{
			contador1++;
		}
	}

	v2=(int *) malloc (contador2 * sizeof(int));
    v1=(int *) malloc (contador1 * sizeof(int));
    
    contador1=0;
    contador2=0;
	for(i=0; i<10; i++){
		if(v[i]%2==0){
			v2[contador2]= v[i];
			contador2= contador2+1;
		}else{ 
			v1[contador1]= v[i];
			contador1= contador1+1;
		}
	}
	printf("\nV1 (Ímpares): ");
	for(i=0; i<contador1; i++){
		printf("| %d |",v1[i]);
	}
	printf("\n\nV2 (Pares): ");
	for(i=0; i<contador2; i++){
		printf("| %d |",v2[i]);
	}
}

