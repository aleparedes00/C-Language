#include <stdio.h>

int	main(){
  int	i, n, som;
  som = 0;
  i = 0;
  do {
    printf ("donnez un entier ");
    scanf ("%d", &n);
    i++;
    som += n;
  }
  while (i < 4);
  printf("Somme : %d\n", som);
  return (1);
}
