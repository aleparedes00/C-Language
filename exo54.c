#include <stdio.h>
#include "doc.h"

t_point		is_negative(t_point *p){
  p->x = p->x * - 1;
  p->y = p->y * -1;
  return (*p);
}
int		main(){
  t_point	punto;

  punto.a = 'A';
  punto.y = 18;
  punto.x = 5;
  is_negative(&punto);
  printf("the coordanate of a %c point are (%d, %d)\n",  punto.a, punto.x, punto.y);
  return (1);
}
