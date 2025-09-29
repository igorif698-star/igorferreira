#include <stdio.h>
#include "funcoes.h"
#include <stdlib.h>
#include <string.h>

int main (void){

float idade;
float peso;
float altura;
char genero;
float resultado;

printf("Ola, aqui voce calcula o seu metabolismo basal, vamos la!!\n");

printf("Qual e a sua idade?\n");
scanf("%f", &idade);

printf("Voce tem quantos quilos?\n");
scanf("%f", &peso);

printf("Sua altura em centimetros eh?\n");
scanf("%f", &altura);

printf("Digite seu gênero (M ou H)\n");
scanf(" %c", &genero);

if( idade >= 0 && peso > 0 && altura >= 1.40)
{
    if (genero == 'M'){
        resultado = metabol_feminino(peso, altura, idade);
        printf("O resultado do seu metabolismo eh %f", resultado);
    }
    else if (genero == 'H'){
        resultado = metabol_masculino(peso, altura, idade);
        printf("O resultado do seu metabolismo eh %f", resultado);
    }
}
else
{
    printf("digite um numero maior que 1\n"); // caso digite um numero =<1
}

return 0;
}