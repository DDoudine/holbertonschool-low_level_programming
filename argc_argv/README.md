# C _ARGC, ARGV

## Résumé:

### Argc : 
@argc: Nombre entier d'arguments de la ligne de commande

En programmation, argc est une variable qui représente le nombre d'arguments passés à un programme. Elle est couramment utilisée en C et C++ pour gérer les arguments de ligne de commande. argc est un entier qui compte toujours au moins un, car le premier argument est le nom du programme lui-même. Les arguments supplémentaires sont stockés dans un tableau appelé argv, où argv[0] contient le nom du programme, argv[1] le premier argument, argv[2] le deuxième, et ainsi de suite. Cela permet au programme de traiter et d'utiliser les arguments passés lors de son exécution.

### Argv : 

@argv: Tableau de pointeurs vers des chaînes de caractères représentant les arguments


argv est une variable fréquemment utilisée en programmation, en particulier en C et C++. Elle représente un tableau de chaînes de caractères (généralement de type char*) et est utilisée pour stocker les arguments passés à un programme lors de son exécution en ligne de commande.
Plus précisément :
argv signifie "argument vector", ce qui suggère un tableau de chaînes d'arguments.
argv[0] contient le nom du programme lui-même.
Les éléments suivants de argv (c'est-à-dire argv[1], argv[2], etc.) contiennent les arguments supplémentaires passés au programme lors de son exécution.
Voici un exemple simple de la manière dont argv est utilisé en C :
```bash
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc est le nombre d'arguments passés (y compris le nom du programme)
    printf("Nombre d'arguments (argc) : %d\n", argc);

    // Parcours des arguments avec argv
    for (int i = 0; i < argc; i++) {
        printf("Argument %d (argv[%d]) : %s\n", i, i, argv[i]);
    }

    return 0;
}
```
Lorsque vous exécutez un programme avec des arguments de ligne de commande, tels que ./monprogramme arg1 arg2, argv contiendra un tableau avec les éléments suivants :
* argv[0] : "./monprogramme" (nom du programme)
* argv[1] : "arg1" (premier argument)
* argv[2] : "arg2" (deuxième argument)
Cela permet au programme de traiter et d'utiliser ces arguments pour effectuer des opérations spécifiques en fonction des valeurs passées sur la ligne de commande.

## Resources:

* [Arguments To Main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
* [Argc And Argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
* [What Does Argc And Argv Mean ?](https://www.youtube.com/watch?v=aP1ijjeZc24)
* [How To Compile With Unused Variables](https://www.google.com/webhp?q=unused+variable+C)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* You are allowed to use the standard library

## TASKS: 

### 0. It ain't what they call you, it's what you answer to
Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
*You should not remove the path before the name of the program

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

mathieu@ubuntu:~/argc, argv$ ./mynameis 
./mynameis

mathieu@ubuntu:~/argc, argv$ mv mynameis mynewnameis
mathieu@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
```

### 1. Silence is argument carried out by other means
Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1-args.c -o nargs

mathieu@ubuntu:~/argc, argv$ ./nargs 
0

mathieu@ubuntu:~/argc, argv$ ./nargs hello
1

mathieu@ubuntu:~/argc, argv$ ./nargs "hello, world"
1

mathieu@ubuntu:~/argc, argv$ ./nargs hello, world
2
```

### 2. The best argument against democracy is a five-minute conversation with the average voter
Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args

mathieu@ubuntu:~/argc, argv$ ./args 
./args

mathieu@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```

### 3. Neither irony nor sarcasm is argument
Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
mathieu@ubuntu:~/argc, argv$ ./mul 2 3
6

mathieu@ubuntu:~/argc, argv$ ./mul 2 -3
-6

mathieu@ubuntu:~/argc, argv$ ./mul 2 0
0

mathieu@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790

mathieu@ubuntu:~/argc, argv$ ./mul
Error
```

### 4. To infinity and beyond
Write a program that adds positive numbers.

* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an int

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
mathieu@ubuntu:~/argc, argv$ ./add 1 1
2

mathieu@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111

mathieu@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error

mathieu@ubuntu:~/argc, argv$ ./add
0
```

### 5. Minimal Number Of Coins For Change
Write a program that prints the minimum number of coins to make change for an amount of money.

* Usage: ./change cents
* where cents is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
* you should use atoi to parse the parameter passed to your program
* If the number passed as the argument is negative, print 0, followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

```bash
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
mathieu@ubuntu:~/argc, argv$ ./change 
Error

mathieu@ubuntu:~/argc, argv$ ./change 10
1

mathieu@ubuntu:~/argc, argv$ ./change 100
4

mathieu@ubuntu:~/argc, argv$ ./change 101
5

mathieu@ubuntu:~/argc, argv$ ./change 13
3
```
