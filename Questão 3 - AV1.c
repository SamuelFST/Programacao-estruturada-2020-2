//Escreva os valores que serão exibidos  e comente cada linha do programa abaixo.

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main()
{
 
 int vetor[]={1967, 1947, 2007}; // Vetor recebendo 3 valores para 3 posicoes
 int *ano; // Declaração de variavel do tipo ponteiro
 ano=&vetor[0]; // Atribuindo o endereco da posicao 0 do vetor a variavel ano, no caso, ano fica com o valor 1967
 ano++; // Aumentando em +1 o indice da posicao recebida, recebendo assim o valor 1947
 printf("Valor: %d", *ano); // Comando de saida do valor que esta armazenado na variavel ano, que e 1947
 (*ano)++; // Aumentando em +1 o valor armazenado na variavel ano, que é 1947
 printf("Valor: %d", *ano); // Comando de saida do valor que esta armazenado na variavel ano com aumento de +1, ficando 1948
 system("pause"); // Pausa do programa
}    

// Os dois valores exibidos serao: 1947 e 1948.



