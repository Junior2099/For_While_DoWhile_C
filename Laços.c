#include <stdio.h>

int main() {

  int i = 1;

  printf(" com while  \n");
  while (i <= 10) {
    printf("%d, ", i);
    i++;
  }

  printf(" \n \n com for  \n");

  for (i = 11; i <= 20; i++) {
    printf("%d, ", i);
  }

  i = 21;

  printf(" \n\n com do while \n \n");

  do {
    printf("%d, ", i);
    i++;
  } while (i <= 30);

  return 0;
}