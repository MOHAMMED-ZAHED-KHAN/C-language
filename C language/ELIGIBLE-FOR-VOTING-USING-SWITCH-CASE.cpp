#include<stdio.h>
int main ()
{
  int Age;
  printf ("Tell me your Age:\n");
  scanf ("%d", &Age);
  switch (Age>=18)
    {
    case 1:
      printf ("You are elible for voting \n");
      break;
    case 2:
      printf ("You are not eligible for voting \n");
      break;
    }
  return 0;
}
