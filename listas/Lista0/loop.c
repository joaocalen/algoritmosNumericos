// programa para testar um loop que termina quando x = 1.

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define tol 0.0000000000000001

int main() {

    double x;

    x = 0.;
    printf("x = %2.14lf\n", x);
    while (x + tol <= 1.0 || x - tol >= 1.0) {
        x = x + 0.1;
        printf("x = %2.14lf\n", x);
    }
    return 0;
}

/*
 Executando o código original, o while não é o suficiente para parar o programa quando x = 1. Sendo assim, o programa
continua executando as somas e as impressões de x + 0.1 incessantemente. Isso acontece devido aos erros de
arredondamento, causados pela quantidade limitada de algarismos significativos na representação do número. Ao 
utilizar um valor de tolerância ínfimo e criar um intervalo com o mesmo, a comparação se torna possível, pois o uso
da constante de tolerância consegue driblar o erro de arredondamento.

 */
