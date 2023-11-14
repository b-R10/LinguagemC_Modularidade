/*
Modularidade
    Procedimento: blocos de cód. limitado entre chaves, e não armazena nada
        pode ter nenhuma, uma ou várias entradas
        é uma sub-rotina; NÃO retorna valor algum.
    
    Função
        pode ter nenhuma, uma ou várias entradas
        SEMPRE retorna algo
Todo procedimento deve ser declarado como void
    void -> é um default; ele não apresenta um retorno.
        ex:
            void mensagem();            // o protótipo deve ser chamado caso o procedimento seja declarado após a função main()
            void mensagem()             // procedimento mensagem()
            {
                printf("Ola");
                printf("\n Bem-vindos!");
            }
            int main()                  // função principal
            {
                mensagem();             // chamada ao módulo mensagem()
                return 0;
            }
*/
#include <stdio.h>                  // biblioteca de input/output
void tirarCarta(int);               // protótipo: utilizado caso o procedimento seja declarado após a função main()
void tirarCarta(int a)              // procedimento que confere a idade e fornece a resposta
{                                                               // A variável a é denominada variável local
    if(a > 17)
        printf("Pode tirar carta de motorista.");               // Possui uma cópia do conteúdo da variável idade
    else
        printf("Não pode tirar carta de motorista.");           // Não modifica a variável original (idade)
}
                                    // A variável local é destruída quando o módulo termina
int main()
{
    int idade = 15;                 // declaração de constantes para teste
    int idade1 = 18;
    tirarCarta(idade);              // chamada da função com as constantes definidas como parâmetros 
    tirarCarta(idade1);
    return 0;                       // retorno da função principal
}