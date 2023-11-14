/*
Implemente uma solução para o problema das operações aritméticas (soma, subtração, multiplicação e divisão).
O usuário deverá informar dois números quaisquer e a operação a ser realizada.
O resultado da operação deverá ser impresso no vídeo. 
Utilize a estrutura switch-case para a escolha da operação a ser realizada
Utilize procedimento com passagem de parâmetro para implementar o módulo que realiza o cálculo de cada operação aritmética
*/

#include <stdio.h>              // library input/output
#include <stdlib.h>             // standart libraries 
#include <locale.h>             // library de padrões de localidade


//////////////////////////////////////////////////////////////////////////////////
void soma(float a, float b)         //procedimento de soma
{
    printf("Resultado = %f", a+b);
}

void subt(float a, float b)         //procedimento de subtração
{
    printf("Resultado = %f", a-b);
}

void mult(float a, float b)         //procedimento de multiplicação
{
    printf("Resultado = %f", a*b);
}

void divi(float a, float b)         //procedimento de divisão
{
    printf("Resultado = %f", a/b);
}
//////////////////////////////////////////////////////////////////////////////////

// função para inserção de número real qualquer
float input2()
{
    float n1;
    printf("Insira um número qualquer\n");
    scanf("%f", &n1);
    return n1;                                  // retorna o valor inserido pelo usuário
}

// função para seleção de operação matemática
void num2()
{
    float n1 = input2(), n2 = input2();         // declaração das variáveis com chamamento da função input2()
    int c;
    printf("Insira qual a operação desejada:");
    printf("\n\t 1-Soma"
            "\n\t 2-Subtração"
            "\n\t 3-Multiplicação"
            "\n\t 4-Divisão\n");
    scanf("%d", &c);
    switch (c)                                  // switch-case montado chamando as funções determinadas anteriormente para operação matemática
    {
        case 1:
            soma(n1, n2);                       // chama o procedimento soma(float a, float b)
            break;
        case 2:
            subt(n1, n2);                       // chama o procedimento subt(float a, float b)
            break;
        case 3:
            mult(n1, n2);                       // chama o procedimento mult(float a, float b)
            break;
        case 4:
            divi(n1, n2);                       // chama o procedimento divi(float a, float b)
            break;
        default:
            printf("Erro de escolha.");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");        // definindo os padrões de digitação da região escolhida
    num2();                                 // chamando o parâmetro num2()
    return 0;
}