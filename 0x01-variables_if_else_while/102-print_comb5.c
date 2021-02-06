#include <stdio.h>

/**
 * main - prints a lot of numbers
 *
 * Return: 0
 */

int main(void)
{
  int d1, d2, dd1, dd2;

  for (d1 = 0; d1 <= '9'; d1++)
  {
    for(d2 = 0; d2 <= '9'; d2++)
    { putchar(' ');
        for (dd1 = 0; dd1 <= '9'; dd1++)
        {
          for (dd2 = 0; dd2 <= '9'; dd2++)
          {
           putchar(',');
          }
        }
    }
  }
  return(0);
}
