#include <stdio.h>

int main()
{
  int row, column, i;
  const int ROWS = 10, WIDTH = 5;

  for (row = 0; row < ROWS; row++) {

    // print spaces
    for (i = 0; i < row; i++) {
      printf(" ");
    }

    // print ****
    for (column = 0; column <= WIDTH; column++) {
      printf("*");
    }

    // new line
    printf("\n");
  }

  return 0;
}
