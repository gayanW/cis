/*
     *
    ***
   *****
  *******
 *********
***********
*/

/*
row : stars : spaces
0 1 5
1 3 4
2 5 3
3 7 2
*/

#include <stdio.h>

int main()
{
  int row, i, j, spaces = 5, stars = 1;
  const int ROWS = 6;

  for (row = 0; row < ROWS; row++) {
    // add spaces
    for (j = 0; j < spaces; j++) {
      printf(" ");
    }

    --spaces;

    // print *
    for (i = 0; i < stars; i++) {
      printf("*");
    }

    stars += 2;

    // new line
    printf("\n");
  }

  return 0;
}
