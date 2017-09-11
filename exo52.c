#include <stdio.h>
#include "doc.h"

void	all_zero(t_point *punto){
  void	print_struct(t_point p);
  punto->name = 0;
  punto->x = 0;
  punto->y = 0;
  print_struct(*punto);//por que necesito agregar el pointeur?
}
void	print_struct(t_point p){
  printf("point %c coordonates %d %d\n", p.name, p.x, p.y);
}

/*int	main(){
  t_point	punto;

  punto.name = 'Z';
  punto.x = 10;
  punto.y = 20;

  all_zero(&punto);
  return (1);
  }*/
