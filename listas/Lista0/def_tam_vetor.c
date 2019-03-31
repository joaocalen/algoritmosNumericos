// Declara um vetor em tempo de compilacao

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main () {

  int n;

  printf("Digite o tamanho do Vetor: ");
  scanf("%d",&n);
  
  double* x = (double*) malloc(n*sizeof(double));

  FILE* saida = fopen("saida.txt", "w");

 
  x[0] = 0.;
  for(int i=1; i <= n; i++) {
    fprintf(saida,"x[ %d ] = %2.15lf\n",i,x[i-1]);
    x[i] = x[i-1] + 0.1;
  }
  printf("x[ %d ] = %2.15lf\n",n,x[n-1]);
fclose(saida);
free(x);       
return 0;        

}
