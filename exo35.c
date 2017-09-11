#include <stdio.h>

int	f1(int n){
  return (n % 2);
}

int	f2(int n){
  return (n % 3);
}

int main(){
  int	n;
  int	i;
  printf("donnez un numéro\n");
  scanf("%d", &n);
  if ((i = f1(n)) == 0)
    printf ("Votre numero est pair\n");
  if ((n = f2(n)) == 0)
    printf ("Votre numero est multiple de 3\n");
  if (i == 0 && n == 0)
    printf ("il est divisible par 6\n");
  return (1);
}
