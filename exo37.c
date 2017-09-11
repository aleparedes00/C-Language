#include <stdio.h>
#define NVALUE 10
void	read(){
  int	t[NVALUE];
  int	i;
  int	max;
  int	min;

  for(i = 0; i < NVALUE; i++)
    {
      printf("Donnez un numéro entier\n");
      scanf("%d", t + i);
    }
  max = min = t[0];
  for(i = 0; i < NVALUE; i++)
    {
      if (t[i] > max)
	max = t[i];
      else if (t[i] < min)
	min = t[i];
    }
  printf ("La valeur la plus grand est %d et la plus petit est %d\n", max, min);
}

int	main(){
  read();
  return(1);
}
