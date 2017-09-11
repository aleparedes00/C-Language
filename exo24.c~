#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_positifnbr()
{
  int	ln;

  ln = 0;
  while (ln < 1)
    {
      printf("How tall would you like your star tree :) ?\n");
      scanf("%d", &ln);
    }
  return (ln);
}

void	pyramde(){
  int	ln;
  int	len_max;
  int	star;
  int	blank;
  char	*pyram;

  ln = my_positifnbr();
  len_max = (ln * 2) - 1;
  pyram = calloc(len_max + 1, sizeof(*pyram));
  while (ln >= 1)
    {
      star = len_max - (ln - 1) * 2;
      blank = (len_max - star) / 2;
      //      printf("stars = %d, len_max = %d, blank = %d\n", star, len_max, blank);
      memset(pyram, ' ', blank*sizeof(*pyram));
      memset(pyram + blank, '*', star*sizeof(*pyram));
      printf("%s\n", pyram);
      ln--;
    }
}

int	main(){
  pyramde();
  return (1);
}
