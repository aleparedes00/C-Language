#include <stdio.h>

void	operation(float a, float b, char c){
  if (c == '*')
    printf ("result of the multiplication is %f\n", a * b);
  else if (c == '-')
    printf ("the result of the sustraction is %f\n", a - b);
  else if (c == '/')
    printf ("the result of the division is %f\n", a / b);
  else
    printf("the result of the addition is %f\n", a + b);
}


int	main(){
  float	a;
  float	b;
  char	c;

  printf("Please, give me 2 float numbers. Use a point to write the decimals\n");
  scanf("%f%f", &a, &b);
  operation(a, b, '+');
  operation(a, b, '-');
  operation(a, b, '*');
}
