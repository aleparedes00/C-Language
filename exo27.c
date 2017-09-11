#include <stdio.h>

int	my_getnote(){
  int	note;

  note = -2;
  while (note < -1 || note > 20)
    {
      printf("Give me a valid note (-1 to quit)\n");
      scanf("%d", &note);
    }
  return (note);
}

void	calnote(){
  int	note;
  int	maxNote = 0;
  int	rmaxNote = 0;
  int	minNote = 20;
  int	rminNote = 0;

  while (note = my_getnote(), note >= 0 && note <= 20){
    if (note == maxNote){
      rmaxNote++;
      printf("rmaxNote = %d\n", rmaxNote);
      }
    else if (note > maxNote)
      {
	maxNote = note;
	rmaxNote = 1;
	printf("maxNote is %d and rmaxNote = %d\n", maxNote, rmaxNote);
      }
    if (note == minNote)
      rminNote++;
    else if (note < minNote)
      {
	minNote = note;
	rminNote = 1;
	printf("minNote is %d and rminNote = %d\n", minNote, rminNote);
      }
  }
  printf("The Max note is %d and it repeats %d times \nThe Min note is %d and it repeats %d times \n", maxNote, rmaxNote, minNote, rminNote);
}
int	main(){
  calnote();
  return (0);
}
