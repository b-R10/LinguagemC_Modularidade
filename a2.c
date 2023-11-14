/*
Cálculo da média de notas 
*/

#include <stdio.h>

void situacaoAluno(float);              // protótipo

float mediaNotas();                     // protótipo

float mediaNotas()                      // função com retorno float
{
    float n1, n2;                       // declaração de variáveis
    printf("\n Informe a nota 1: ");    // inserção das notas
    scanf("%f", &n1);
    printf("\n Informe a nota 2: ");
    scanf("%f", &n2);
    return (n1+n2)/2;                    // retorno para função mediaNotas
}

void situacaoAluno(float m)             // procedimento para decisão de aprovação/reprovação
{
    if(m >= 7)                          // se o returno da função mediaNotas for maior ou igual a 7
        printf("\nAprovado!!");
    else                                // qualquer outro caso
        printf("\nReprovado!!");
}

int main()                              // função principal
{
    float media;                        // declaração de variáveis
    media = mediaNotas();               // chamada da função mediaNotas() e inserção na variável media
    printf("\nMédia: %.2f", media);
    situacaoAluno(media);               // chamada do procedimento situacaoAluno();
    return 0;                           // retorno da função principal
}