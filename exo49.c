#include <stdio.h>
#include <stdlib.h>
void	getText(char *str, int n){
  printf("Entrez une phrase\n");
  fgets(str, n, stdin);
}

int	countE(){
  int	i;
  int	count;
  char	*str;

  i = 0;
  count = 0;
  str = calloc(129, sizeof *str);
  if(str){
    getText(str, 128);
    str[128] = '\0';
  }
  while (str[i] != '\0'){
    if(str[i] == 'e')
      count++;
    i++;
  }
  free(str);
  return (count);
}

int	main(){
  printf("The amount of e is %d times\n", countE());
  return (1);
}
