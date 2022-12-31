#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
  char c = 0;
  while(c <= 255)
  {
    write(1, &c, 1);
    c++;
  }
  return (0);
}