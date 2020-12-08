//Desenvolva um programa que exemplifique a passagem de parâmetro por referência em uma função, comentando cada linha do programa.

#include<stdio.h>
#include<stdlib.h>

void troca(int *a, int *b); // Chamada da funcao troca, para que seja reconhecida pelo main

main(){
        int a=5,b=10; // Declaracao de duas variaveis do tipo inteiro com seus valores iniciais
        printf("Antes da passagem por referencia: a=%d | b=%d\n",a,b); // Comando de saida sem a passagem por referencia
        troca(&a,&b); // Chamada da funcao troca usando as variaveis a e b, funcao essa que tem por objetivo fazer a passagem por referencia
        printf("Depois da passagem por referencia: a=%d | b=%d\n",a,b); // Comando de saida usando a passagem por referencia
}

void troca(int *a, int *b){ // Funcao para troca, usando duas variaveis do tipo ponteiro
    int ab; // Variavel do tipo inteiro
    ab=*a; // Variavel ab recebendo o endereco da variavel a
    *a=*b; // Variavel a recebendo endereco da variavel b
    *b=ab; // Variavel b recebendo o valor salvo na variavel ab
}
