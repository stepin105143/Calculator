#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"					/* Add include file*/
#include "test_calculator.h"

int (*p[2]) (int x, int y);

int main(void)
{
  int result;
  int i, j, op;

  p[0] = sum; /* address of sum() */
  p[1] = subtract; /* address of subtract() */


  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j);

  printf("0: Add, 1: Subtract\n");
  do {
    printf("Enter number of operation: ");
    scanf("%d", &op);
  } while(op<0 || op>3);

  result = (*p[op]) (i, j);
  printf("%d", result);
  test_main();

  return 0;
}
