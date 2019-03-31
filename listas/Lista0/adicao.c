#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

double adicao(double x, double y);

int main () {

  double x,y;

  printf("Digite x e y: ");
  scanf("%lf",&x);
  scanf("%lf",&y);


  printf("x : %f \n y: %f \n soma: %f \n",x,y,adicao(x,y));

return 0;

}

double adicao(double x, double y){
return x+y;
}
