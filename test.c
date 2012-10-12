#include <stdio.h>

int main(void)
{
  int num, con = 0, temp;
  scanf("%d", &num);
  temp = num;

  while (temp) {
     con++;
     temp >>= 1;
  }

  while (con)
    putchar(((num >> --con) & 1) ? '1' : '0');
  putchar('\n');

  return 0;
}
