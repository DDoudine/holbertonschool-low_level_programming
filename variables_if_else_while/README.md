# C - Variables, if, else, while

## Résumé:

En langage C, les variables, les structures de contrôle ```if```, ```else```, et les boucles ```while``` sont des éléments fondamentaux pour la manipulation de données et le contrôle de flux dans les programmes. Voici un résumé de ces concepts :

1. Variables :

* Les variables sont des emplacements de mémoire qui stockent des données.
* Elles sont déclarées en spécifiant leur type et leur nom.
* Exemple : int age = 25;

2. Structures de contrôle if, else :

* Les structures if permettent de prendre des décisions basées sur des conditions.
* Si la condition est vraie, le bloc de code à l'intérieur de l'instruction if est exécuté ; sinon, le bloc de code dans l'instruction else peut être exécuté.

Exemple :
```bash
if (age >= 18) {
    printf("Majeur\n");
} else {
    printf("Mineur\n");
}
```
3. Boucle while :

* La boucle while permet d'exécuter un bloc de code tant qu'une condition spécifiée est vraie.
* Elle teste la condition avant chaque itération.

Exemple :
```bash
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```
* Cela affiche les nombres de 0 à 4.

En résumé, les variables permettent de stocker des données, les structures de contrôle ```if``` et ```else``` permettent de prendre des décisions conditionnelles, et la boucle ```while``` facilite l'itération à travers un bloc de code tant qu'une condition spécifiée est vraie. Ces éléments sont fondamentaux pour la logique et le contrôle de flux dans les programmes en langage C.

## Resources:
* [Everything You Need To Know To Start With C.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/42507f7938ddf9b8963bc903bac7d75f88ca8881.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20231115%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20231115T180945Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ff628c5d1ff5402bc83ad524d0160e77c37bb5860a37f6188341df72f554f6a5)
* [Keywords And Identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
* [Integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
* [Arithmetic Operator In C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
* [If Statements In C](https://www.cprogramming.com/tutorial/c/lesson2.html)
* [If...Else Statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
* [Relational Operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
* [Logical Operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
* [While Loop In C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
* [While Loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## TASKS: 

### 0. Positive anything is better than negative nothing

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

* You can find the source code here
* The variable n will store a different value every time you will run this program
* You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
* The output of the program should be:
The number, followed by
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
followed by a new line

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
mathieu@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-973398895 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-199220452 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative
561319348 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
266853958 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-48147767 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative
0 is zero
```

### 1. The last digit

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

* You can find the source code here
* The variable n will store a different value every time you run this program
* You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
* if the last digit of n is greater than 5: the string and is greater than 5
* if the last digit of n is 0: the string and is 0
* if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
```

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
mathieu@ubuntu:~/$ ./2-print_alphabet

abcdefghijklmnopqrstuvwxyz
```

### 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
mathieu@ubuntu:~/$ ./3-print_alphabets | cat -e

abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```

### 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except q and e
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
mathieu@ubuntu:~/$ ./4-print_alphabt

abcdfghijklmnoprstuvwxyz
```

### 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* All your code should be in the main function

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
mathieu@ubuntu:~/$ ./5-print_numbers 

0123456789
```

### 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* You are not allowed to use any variable of type char
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* You can only use putchar twice in your code
* All your code should be in the main function

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
mathieu@ubuntu:~/$ ./6-print_numberz 

0123456789
```

### 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
mathieu@ubuntu:~/$ ./7-print_tebahpla

zyxwvutsrqponmlkjihgfedcba
```

### 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
mathieu@ubuntu:~/$ ./8-print_base16

0123456789abcdef
```

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by ,, followed by a space
* Numbers should be printed in ascending order
* You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar four times maximum in your code
* You are not allowed to use any variable of type char

```bash
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
mathieu@ubuntu:~/$ ./9-print_comb | cat -e

0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```
