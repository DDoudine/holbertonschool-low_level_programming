# C - More functions, more nested loops

## Résumé :

### Fonctions supplémentaires en C :

* En C, les fonctions sont des blocs de code autonomes pouvant être appelés depuis d'autres parties du programme.
* "More functions" suggère l'introduction ou l'utilisation de fonctions supplémentaires dans le programme.
* Les fonctions aident à organiser le code, le rendent plus lisible et favorisent la réutilisation du code.

### Boucles imbriquées (Nested Loops) :

* Les boucles imbriquées sont des boucles placées à l'intérieur d'autres boucles.
* Elles sont souvent utilisées pour traiter des structures de données multidimensionnelles telles que les tableaux à deux dimensions.
* Les boucles imbriquées permettent d'itérer à travers les éléments d'une manière plus complexe, avec des boucles internes parcourant les éléments à l'intérieur de chaque itération de la boucle externe.

En résumé, ajout de fonctions supplémentaires dans un programme, ainsi que l'utilisation de boucles imbriquées pour gérer des structures de données plus complexes.

## 0. isupper
Write a function that checks for uppercase character.

* Prototype: int _isupper(int c);
* Returns 1 if c is uppercase
* Returns 0 otherwise
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.

## 1. isdigit
Write a function that checks for a digit (0 through 9).

* Prototype: int _isdigit(int c);
* Returns 1 if c is a digit
* Returns 0 otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

## 2. Collaboration is multiplication
Write a function that multiplies two integers.

* Prototype: int mul(int a, int b);

## 3. The numbers speak for themselves
Write a function that prints the numbers, from 0 to 9, followed by a new line.

* Prototype: void print_numbers(void);
* You can only use _putchar twice in your code

## 4. I believe in numbers and signs
Write a function that prints the numbers, from 0 to 9, followed by a new line.

* Prototype: void print_most_numbers(void);
* Do not print 2 and 4
* You can only use _putchar twice in your code

## 5. Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

* Prototype: void more_numbers(void);
* You can only use _putchar three times in your code

## 6. The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.

* Prototype: void print_line(int n);
* You can only use _putchar function to print
* Where n is the number of times the character _ should be printed
* The line should end with a \n
* If n is 0 or less, the function should only print \n

## 7. I feel like I am diagonally parked in a parallel universe

Write a function that draws a diagonal line on the terminal.

* Prototype: void print_diagonal(int n);
* You can only use _putchar function to print
* Where n is the number of times the character \ should be printed
* The diagonal should end with a \n
* If n is 0 or less, the function should only print a \n

## 8. You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.

* Prototype: void print_square(int size);
* You can only use _putchar function to print
* Where size is the size of the square
* If size is 0 or less, the function should print only a new line
* Use the character # to print the square

## 9. Fizz-Buzz
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

* Each number or word should be separated by a space
* You are allowed to use the standard library

## 10. Triangles
Write a function that prints a triangle, followed by a new line.

* Prototype: void print_triangle(int size);
* You can only use _putchar function to print
* Where size is the size of the triangle
* If size is 0 or less, the function should print only a new line
* Use the character # to print the triangle
