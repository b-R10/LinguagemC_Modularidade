/*
2. Escreva soluções em C que contenham funções sem passagem de parâmetros e sem retorno que:
    a. Leia um número inteiro e informe se o número é ou não múltiplo de 4
    b. Leia um número inteiro, verifique e apresente se o número é par ou ímpar.
    c. Leia 2 números inteiros positivos e apresente a soma dos n números existentes entre eles.
    d. Leia o raio de uma esfera e apresente o seu volume (4πR^3/3).
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

void letraA()                               // procedimento
{
    int a;
    printf("\nInsira um número inteiro:");
    scanf("%d", &a);
    if((a%4) == 0)                          // caso a valor de a seja múltiplo de 4
        printf("É múltiplo de 4.");
    else                                    // caso não múltiplo de 4
        printf("Não é múltiplo de 4.");
}

void letraB()                               // procedimento
{
    int a;
    printf("\nInsira um número inteiro:");
    scanf("%d", &a);
    if((a%2) != 0)                          // caso o valor seja ímpar
        printf("É ímpar.");
    else                                    // caso seja par
        printf("É par.");
}

void letraC()                               // procedimento
{
    int a, b, aux;
    printf("\nInsira dois números inteiros positivos:\n");
    scanf("%d %d", &a, &b);
    if(a<b)                                 // com o uso de uma variável auxiliar alternam se os valores
    {                                       // para que a seja sempre maior que b
        aux = a;
        a = b;
        b = aux;
    }
    aux = 0;                                // define-se o valor da variável aux para 0. Assim, é possível usá-la para
    for(int i=b+1; i<a; i++)                // receber o valor da soma realizada no laço for() e economizar memória
    {
        aux += i;
    }
    printf("\nSoma = %d", aux);
}

void letraD()
{
    float raio, volume;
    double pi=acos(-1);                             // aqui, define-se pi como o arcoseno de -1
    printf("%.16lf", pi);                           // impressão teste para conferência do valor de pi
    printf("\nInsira o valor do raio da esfera:");
    scanf("%f", &raio);
    volume = (4*pi*(raio*raio*raio))/3;             // inserção do resultado do calculo do volume na variável
    printf("\nVolume = %f", volume);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    letraA();                               // chamada do procedimento letraA()
    letraB();                               // chamada do procedimento letraB()
    letraC();                               // chamada do procedimento letraC()
    letraD();                               // chamada do procedimento letraD()
    return 0;
}