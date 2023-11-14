/*
Somar dois números inteiros usando função
*/

#include <stdio.h>

int somar(int, int);                             // protótipo (utilizado quando a função é declarada após a função main())

int somar(int n1, int n2)                        // função (pois apresenta retorno)
{
    return(n1 + n2);                             // retorno da função
}

int main()                                       // função principal
{
    int a, b, c;                                 // declaração de variáveis

    printf("****    SOMA DE INTEIROS    ****");  // inserção de variáveis
    printf("\n\n Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("\n\n Informe o segundo valor: ");
    scanf("%d", &b);

    c = somar(a, b);                             // o retorno da função somar() é armazenado na variável c

    printf("\n Resultado da soma: %d", c);
    return 0;                                    // retorno da função principal
}