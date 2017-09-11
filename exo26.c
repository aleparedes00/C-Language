#include <stdio.h>

void	fibo(int n)
{
  int	u1;
  int	u2;
  int	i;
  int	ui;

  u1 = 1;
  u2 = 1;
  i = 3;
  while (i <= n)
    {
      ui = u2 + u1;
      u1 = u2;
      u2 = ui;
      //      printf("ui = %d, u1 = %d, u2 = %d\n", ui, u1, u2);
      i++;
}
  printf ("Le numero est %d\n", ui);
}

int	main(){
  int	n;

  n = 0;
  while (n < 3)
    {
      printf("Please, enter a number bigger than 2\n");
      scanf("%d", &n);
}
  fibo(n);
  return (1);
}
