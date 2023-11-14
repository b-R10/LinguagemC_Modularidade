/*
Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
    Ter no mínimo 65 anos de idade, ou
    Ter trabalhado no mínimo 30 anos, ou
    Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos
Com base nas informações acima, implemente uma solução que leia: o ano de seu nascimento e o ano de seu ingresso na empresa.
Imprima a idade e o tempo de trabalho do empregado e a mensagem “Requerer aposentadoria” ou “Não requerer”
Utilize modularidade para a codificação da solução!!
*/
#include <stdio.h>                                  // biblioteca de entrada/saída
#include <stdlib.h>                                 // biblioteca padrão C
#include <locale.h>                                 // biblioteca para definir o padrão de inserção do usuário

int condicoes(){                                    // função para verificar condições
    int nasc, ingres, atual=2023;                                                           // definição das variáveis necessárias
    printf("Insira o ano de nascimento do funcionário:\n");
    scanf("%d", &nasc);
    printf("insira o ano de ingresso na empresa:\n");
    scanf("%d", &ingres);
    if((atual-nasc>=65) || (atual-ingres>=30) || ((atual-nasc>=60)&&(atual-ingres>=25)))    // Condicional if para verificar se deve ou
        return 1;                                                                           // ou não requerer a aposentadoria.
    else                                                                                    // Se sim, retorna 1, se não, retorna 0.
        return 0;
}
void verificacao(){                             // procedimento que fornece o resultado da verificação
    int a = condicoes();                        // insere na variável a o retorno da função condicoes()
    if(a == 1)                                  // se o valor retornado por condicoes() for igual a 1, a aposentadoria é requerida
        printf("\nRequerer aposentadoria.");
    else                                        // se o valor retornado for outro, não é requerida
        printf("\nNão requerer.");
}
int main(){                                     // função principal do programa
    setlocale(LC_ALL, "portuguese");            // define os padrões de digitação da região escolhida
    verificacao();                              // chamamento do procedimento verificacao()
    return 0;
}