#ifndef __DOC__
#define __DOC__

typedef struct s_point
{
  char	name;
  int   x;
  int   y;
} t_point;

void    all_zero(t_point *);
void    print_struct(t_point p);
#endif
