#include <stdio.h>

/*
 * main - Entry
 * show sizes
 * Return: 0
 */
 
int main(void)
{
  char char_type;
  int int_type;
  long int long_int_type;
  long long int long_long_int_type;
  float float_type;
  
  printf("Size of a char: %ld byte(s)\n", sizeof(char_type));
  printf("Size of an int: %ld byte(s)\n", sizeof(int_type));
  printf("Size of a long int: %ld byte(s)\n", sizeof(long_int_type));
  printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_int_type));
  printf("Size of a float: %ld byte(s)\n", sizeof(float_type));
  
  return 0;
}
