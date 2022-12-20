#include <stdio.h>

int main() {
  int i=0;
  //Expected syntax error in the below line
  for (; i<=5; i++);
      printf("%d", i);
  return 0;
}

/* OUTPUT: 6 */
