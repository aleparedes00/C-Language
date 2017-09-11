

int pos[] = {0, 2, 5, 10};
int pos_max = 2;
int total = 60;

int     add_stack(int *stack, int size) {
  if (size < 0) return 0;
  return pos[*stack] + add_stack(stack + 1, size - 1);
}

void	aff_stack(int *stack, int size) {
  if (size < 0) {
    printf("\n");
    return;
  }
  printf("%d ", pos[*stack]);
  aff_stack(stack+1, size-1);
}

void	find_pos() {
  int max_size = total / pos[1];
  int *stack = calloc(max_size, sizeof(int));
  int i = 0;
  int j = 0;
  int found = 0;

  while (i >= 0) {
    stack[i] = j;
    aff_stack(stack, max_size-1);
    int hyp = add_stack(stack, max_size-1);
    if (hyp == total) {
      aff_stack(stack, max_size-1);
      found++;
    } else if (hyp > total) {
      i--;
    } else {
      printf("i: %d\n", i);
      i++;
    }
    j = stack[i] + 1;
    while (j > 2) {
      i--;
      j = stack[i] + 1;
    }
    printf("i: %d, j: %d\n", i, j);
  }
}

int	main(int ac, char** av) {
  
  find_pos();
  return (0);
}
