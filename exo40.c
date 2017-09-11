#include <stdio.h>

float	somme(float t[][4], int n, int p){
  int	som;
  int	i, j;
  
  i = 0;
  som = 0;
  while (i < n){
    j = 0;
    while (j < p){
      som += t[i][j];
      j++;
    }
    i++;
  }
  return (som);
}

int	main(){
  float t[3][4] = {
    {2.0, 3.1, 4.9, 10},
    {1, 35, 20.8, 30.6},
    {7, 10, 1, 2}
  };
  printf("La somme du tableau est %f\n", somme(t, 3, 4));
  return (1);
}
