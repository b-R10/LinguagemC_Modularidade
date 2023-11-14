/*
Implemente uma solução para o problema das operações aritméticas (soma, subtração, multiplicação e divisão).
O usuário deverá informar dois números quaisquer e a operação a ser realizada.
O resultado da operação deverá ser impresso no vídeo. 
Utilize a estrutura switch-case para a escolha da operação a ser realizada

Implemente a mesma solução para o problema anterior.
Entretanto, utilize função com passagem de parâmetro para implementar o módulo que realiza o cálculo de cada operação aritmética
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função de somatória
float soma(int a, int b)        // função onde os parâmetros fornecidos em sua chamada são inseridos localmente em a e b respectivamente
{
    return a+b;                 // retorna o resultado da operação a+b
}
// função de subtração
float subt(int a, int b)        // função onde os parâmetros fornecidos em sua chamada são inseridos localmente em a e b respectivamente
{
    return a-b;                 // retorna o resultado da operação a-b
}
// função de multiplicação
float mult(int a, int b)        // função onde os parâmetros fornecidos em sua chamada são inseridos localmente em a e b respectivamente
{
    return a*b;                 // retorna o resultado da operação a*b
}
// função de divisão
float divi(int a, int b)        // função onde os parâmetros fornecidos em sua chamada são inseridos localmente em a e b respectivamente
{
    return a/b;                 // retorna o resultado da operação a/b
}

// função para inserir um número qualquer
float insiraNum()
{
    float n1;
    printf("Insira um número qualquer:\n");
    scanf("%f", &n1);
    return n1;      // retorna o número inserido pelo usuário
}

// função com switch-case para selecionar a operação matemática desejada
float exec()                                        // função que executa outras subfunções 
{
    float n1 = insiraNum(), n2 = insiraNum();       // declaração de variáveis mediande chamamento da função insiraNum()
    float resultado;
    int c;
    printf("Insira qual a operação desejada:");
    printf("\n\t 1-Soma"
            "\n\t 2-Subtração"
            "\n\t 3-Multiplicação"
            "\n\t 4-Divisão\n");
    scanf("%d", &c);
    switch(c)                   // switch-case para determinar a operação desejada
    {
        // chamamento das funções com os parâmetros definidos anteriormente
        case 1:
            resultado = soma(n1, n2);               // retorna o valor da operação entre os parâmetros declarados(n1+n2)
            break;
        case 2:
            resultado = subt(n1, n2);               // retorna o valor da operação entre os parâmetros declarados(n1-n2)
            break;
        case 3:
            resultado = mult(n1, n2);               // retorna o valor da operação entre os parâmetros declarados(n1*n2)
            break;
        case 4:
            resultado = divi(n1, n2);               // retorna o valor da operação entre os parâmetros declarados(n1/n2)
            break;
        default:
            printf("Erro de escolha.");
    }
    return resultado;       // retorna o resultado da operação escolhida
}

int main()
{
    setlocale(LC_ALL, "portuguese");        // definindo os padrões de digitação da região escolhida
    float r = exec();                       // declaração de variável com o retorno da função exec()
    printf("Resultado = %f", r);
    return 0;
}