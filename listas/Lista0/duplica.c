#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void duplica(double* x);

int main () {

  double x,y;

  printf("Digite x: ");
  scanf("%lf",&x);
  printf("x: %lf \n",x);
  duplica(&x);
  printf("Valor Duplicado: %lf \n",x);

return 0;

}

void duplica(double *x){
   *x = 2 * (*x);
}
