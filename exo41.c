#include <stdio.h>

float	somme(float *t, int n){

  int	i;
  float	som;

  i = 0;
  som = 0;
  while (i < n){
    som += t[i];
    i++;
  }
  return (som);
}

int	main(){
  float	t[] = {5, 3.1, 2.9, 4.6, 5};
  printf("La somme du tableau est %f\n", somme(t, 5));
  return (1);
}
