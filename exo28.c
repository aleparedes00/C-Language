#include <stdio.h>
#define VALUE 10

void	multi(){
  int	i;
  int	j;

  printf("      I");
  for(i = 1; i <= VALUE; i++)
      printf("%4d", i);
  printf("\n ------------------------------");
  for (i = 1; i <= VALUE; i++){
    printf("\n %3.2d I", i);
    for (j = 1; j <= 10; j++)
      printf("%4d", j*i);
    printf("\n");
    j = 1;
  }
}

int	main(){
  multi();
}
