#include <stdio.h>
#include <string.h>

void	getVerb(char *str, int *tv){
  int	i;
  int	n;
  int	k;
  int	shit;
  char	strLocal[129];

  shit = -1;
  do{
    printf("Verb?\n");
    fgets(strLocal, sizeof strLocal, stdin);
    i = strlen(strLocal);
    n = i - 1;
    k = i - 2;
    if (strLocal[i-1] < 'A'){
      strLocal[i-1] = '\0';
      n = i - 2;
      k = i -3;
    }
  }
  while(strLocal[k] != 'e' || strLocal[n] != 'r');
  while (shit < 0 || shit > 2){
    printf("tapez :\n0 pour Present\n1 pour Future\n2 pour Imparfait\n");
    scanf("%d", &shit);   
  }
  strcpy(str, strLocal);
  *tv = shit;
  printf("value of tv is %d\n", *tv);
}

void	conjugation(){
  char	str[129];
  int	tv;
  char  t[3][6][6] = {
    {"e", "es", "e", "ons", "ez", "ent"},
    {"erai", "eras", "era", "erons", "erez", "eront"},
    {"ais", "ais", "ait", "ions", "iez", "aient"},
  };
  char	conj[][5] = {
    {"je"},
    {"tu"},
    {"il"},
    {"nous"},
    {"vous"},
    {"elles"}
  };
  /* char	verbish[6][3][] = {
    {"e"},
    {"es"},
    {"e"},
    {"ons"},
    {"ez"},
    {"ent"},
    };*/
  int	i, j;

  tv = - 1;
  j = 0;
  getVerb(str, &tv);
  j = strlen(str);
  str[j-2] = '\0';
  //  printf("valeur de j %d , de -1 %c et de -2 %c\n", j, str[j-1], str[j-2]);
  for (i =0; i < 6; i++)
    {
      // for(j = 0; j < 2; j++)
      printf("%s %s%s", conj[i], str, t[tv][i]);
      printf("\n");
    }
}
int	main(){
  conjugation();
  return (1);
}
