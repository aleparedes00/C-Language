#include <stdio.h>

void	getnbr(){
  char	str[50];
  int	a;
  int	b;
  int	result;

  a = -1;
  b = -1;
  do{
    printf ("Give me two positive int: \n");
    //    printf("\t\t\t\t TEST: Prinf de sizeof str: %ld\n", sizeof str);
    fgets(str, sizeof str, stdin);
    result = sscanf(str, "%d %d", &a, &b);
    //    printf("\t\t\t test the value of a: %d and b: %d\n", a, b);
    if (a == -1 && b == -1)
      printf("Wrong answer, please try again\n");
}
  while (result != 0 && (a < 0 || b < 0));
  printf("Thank you for %d and %d\n", a, b);
}

int	main(){
  getnbr();
  return (1);
}
