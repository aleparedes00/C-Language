#include <stdio.h>
#include <math.h>

int		main(){
  int	        x = 0;

  while (x <= 0){  
    printf("Give a positif number, please\n");
    scanf("%d",&x);
    if(x <= 0)
      printf("Please, a number bigger than 0\n");
  }
  printf("The square root of %d is %lf\n", x, sqrt(x));
  return (1);
}
