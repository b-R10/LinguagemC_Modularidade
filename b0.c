#include <stdio.h>

/*
void triangleArea ();                   // nessa linha, não se deve usar o ;
double product                          // essa declaração de variável deveria vir após a chave
{                                       // deveria ser utilizada acima da  declaração das variáveis
    product = (base * height)/2         // falta ; no final da linha. As variáveis base e height não foram declaradas
    printf(“Area: %d”, product);        // %f ou %lf são os parâmetros que deveriam ser passados 
}
*/
void triangleArea()
{
    double product, base=3, height=2;   // nesse caso, foram declaradas variáveis double e atribuídos valores para base e height para execução
    product = (base*height)/2;          // insere o valor do cálculo realizado na variável product
    printf("Area = %lf\n", product);
}

/*
void foo (float a) {                // não é necessária a chamada do parâmetro float a
    float a;                        // seria interessante adicionar um valor à variável a antes de imprimir na tela
    printf("%f\n",a);
}
*/
void foo()                          // nesse caso, não é necessário parâmetro
{
    float a = 3;                    // um valor foi definido para variável a para que a função printf()
    printf(" %.3f\n", a);           // que vem na sequência receba um valor coerente
}

int main()
{
    triangleArea();                 // chamada do procedimento triangleArea()
    foo();                          // chamada do procedimento foo()
    return 0;
}