#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  srand(time(NULL));
  for (int x = 0; x < 10; x++)
  {
    printf ("Numero: %d\r\n", rand() % 5); 
  }
  return 0;
}