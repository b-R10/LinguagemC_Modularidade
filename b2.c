/*
Resolva os exercícios descritos a seguir:
    Escreva programas em C que contenham funções sem passagem de parâmetros e sem retorno que:
        a. Leia três números inteiros: a, b e c, onde a>1;
            e apresente a soma de todos os números inteiros de b até c que sejam divisíveis por a.
            Exemplo: Para os valores de entrada 2 (para a), 5 (para b) e 10 (para c), a soma será 6+8+10= 24.
        b. Leia a altura e o sexo de uma pessoa e apresente o seu peso ideal.
            Para homens, calcular e apresentar o peso ideal usando a fórmula peso ideal = 0.95 x alt - 95 e,
            para mulheres, peso ideal = 0.85 x alt - 85.
        c. Leia um número natural, calcule e apresente o seu fatorial.
        d. Leia x e y (x e y inteiro >=0), calcule e apresente x^y.
            Restrição: não é permitido utilizar a função pow.
*/
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void letraA()
{
    printf("\n\tletra a:\n");
    printf("\nInsira três números inteiros e positivos: ");
    int a, b, c, soma=0;
    scanf("%d", &a);
    while(a<=1)                  // laço while para forçar a>1
    {
        printf("\nO primeiro número deve ser maior que 1. Digite novamente:");
        scanf("%d", &a);
    }
    scanf("%d %d", &b, &c);
    for(int i=b; i<=c; i++)     // laço for para somar a variavel soma os valores mediante o laço if
    {
        if(i%a==0)              // laço condicional que permite a soma, apenas, dos números que são divisíveis por a
        {
            soma += i;
        }
    }
    printf("%d", soma);
}

void letraB()
{
    char sexo;
    float altura, peso;
    printf("\n\tletra b:\n");
    printf("Insira o sexo da pessoa em questão(M/F):");
    scanf(" %c", &sexo);
    printf("Insira a altura da pessoa em questão(cm):\n");
    scanf("%f", &altura);
    sexo = tolower(sexo);                       // a função tolower() altera todos os caracteres da string é minúsculos
    if(sexo == 'm')                             // condicional: caso o valor de sexo seja 'm'
        peso = (0.95 * altura - 95);
    else if(sexo == 'f')                        // condicional: caso o valor de sexo seja 'f'
        peso = (0.85 * altura - 85);
    printf("peso ideal = %.2f", peso);
}

void letraC()
{
    printf("\n\tletra c:\n");
    printf("\nInsira um número natural:");
    int a, resultado = 1;
    scanf("%d", &a);
    while(a<0)                                  // laço while para forçar que a>0
    {
        printf("\nInsira um número natural:");
    }
    for(int i=a; i>0; i--)                      // contador regressivo partindo de a até 1
    {                                           // ideal para realizar o cálculo fatorial
        resultado *= i;
    }
    printf("%d", resultado);
}

void letraD()
{
    printf("\n\tletra d:\n");
    int x = -1, y = -1, resultado = 1;
    while(x<0)                                              // por ter sido forçado na declaração, o laço força x>=0
    {
        printf("Insira um número inteiro positivo:");
        scanf("%d", &x);
    }
    while(y<0)                                              // por ter sido forçado na declaração, o laço força y>=0
    {
        printf("Insira mais um número inteiro positivo:");
        scanf("%d", &y);
    }
    for(int i=0; i<y; i++)                                 // Calcular x*x, y vezes
    {
        resultado *= (x);
    }
    printf("resultado = %d", resultado);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    letraA();                                   // chamada do procedimento letraA()
    letraB();                                   // chamada do procedimento letraB()
    letraC();                                   // chamada do procedimento letraC()
    letraD();                                   // chamada do procedimento letraD()
    return 0;
}