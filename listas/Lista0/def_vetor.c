// Declara um vetor em tempo de compilacao

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define DIM 101
int main () {

  double x [DIM];
  int n;

  n = 50;
  x[0] = 0.;
  for(int i=1; i <= n; i++) {
    x[i] = x[i-1] + 0.1;
  }
  printf("x[ %d ] = %2.15lf\n",n,x[n]);
       
return 0;        

}
