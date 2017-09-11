#include <stdio.h>
float	somme(int n) {
  if (n == 1)
      return 1;
  return 1.0 / n + somme(n - 1);
}

int	main(){
  int	n;
  
  do {
    printf("Please, give a positif number\n");
    scanf("%d", &n);
    if(n <= 0)
	printf("Please, a number bigger that 0\n");
  }  while (n <= 0);
  printf("the sum is %f\n", somme(n));
  return (1);
}
