#include <stdio.h>
#include "doc.h"

#define NB 3

void		affiche(t_point *curve, int n)
{
  int	i;
  char	buffer[128] = "";

  i = 0;
  while (i < NB){
    printf("Please write here the point\n");
    while (fgets(buffer, sizeof buffer, stdin), (sscanf(buffer, "%c %d %d", &curve[i].name, &curve[i].x, &curve[i].y)) < 3)
      printf("Please, insert here a name and two coordonates\n");
    i++;
  }
}


int		main(){
  t_point	courbe[NB];
  int		i;
  i = 0;
  affiche(courbe, NB);

  while (i < NB){
    print_struct(courbe[i]);
    i++;
  }
  return (1);
}
