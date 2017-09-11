#include <stdio.h>
struct	s_minmax {
  int	max;
  int	min;
};

struct s_minmax		maxmin(int *t, int n){
  int			i;
  struct s_minmax	fuck;

  i = 0;
  fuck.max = t[i];
  fuck.min = t[i];
  while (i < n)
    {
      if (t[i] > fuck.max)
	fuck.max = t[i];
      else if (t[i] < fuck.min)
	fuck.min = t[i];
      i++;
    }
  return (fuck);
}

int				main(){
  int				t[5] = {2, 4, 6, 7, 3};
  struct s_minmax		you;
  
  you = maxmin(t, 5);
  printf("la valeur max est %d et la valeur min est %d\n", you.max, you.min);
  return (1);
}
