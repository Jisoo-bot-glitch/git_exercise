#include <stdio.h>

int main ()
{
  
  FILE *fp = fopen("words.txt", "w");

  fputs("Hello, world!", fp);

  fclose(fp);

  return 0;

}