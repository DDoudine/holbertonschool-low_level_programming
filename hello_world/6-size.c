#include <stdio.h>

/*
 * main - Entry
 * show sizes
 * Return: 0
 */
 
int main(void)
{
  int int_type;
  long long_type;
  long int long_int_type;
  long long int long_long_int_type;
  signed signed_type;

  printf("Size of a char: %d byte(s)\n", size(int_type));
  printf("Size of an int: %d byte(s)\n", size(long_type));
  printf("Size of a long int: %d byte(s)\n", size(long_int_type));
  printf("Size of a long long int: %d byte(s)\n", size(long_long_int_type));
  printf("Size of a float: %d byte(s)\n", size(signed_type));
  return 0;
}
