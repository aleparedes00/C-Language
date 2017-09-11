#include <stdio.h>
#include <string.h>

void    get_verb(char *str){
  int   i;
  char  strLocal[129];

  do{
    printf("Sentence:\n");
    
  }
  while (*fgets(strLocal, sizeof strLocal, stdin) < 'A');
  i = strlen(strLocal);
  if (strLocal[i-1] < 'A')
    strLocal[i-1] = '\0';
  strcpy(str, strLocal);
}

void	erase_e(){
  char	sentence[129];
  char	dest[129];
  int	i, j;
  
  get_verb(sentence);
  i = 0;
  j = 0;
  while (sentence[i] != '\0'){
    while(sentence[i] == 'e')
      i++;
    dest[j] = sentence[i];
    i++;
    j++;
  }
  dest[j] = '\0';
  printf("%s\n", dest);
}
  
int	main(){
  erase_e();
  return (1);
}
