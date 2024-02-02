# C - More malloc, free

## Résumé:
* Une variable occupe plus ou moins d'espace en mémoire en fonction de son type.
* On peut connaître le nombre d'octets occupés par un type à l'aide de sizeof().
* L'allocation dynamique consiste à réserver manuellement de l'espace en mémoire pour une variable ou un tableau.
* L'allocation est effectuée avec malloc() et il ne faut surtout pas oublier de libérer la mémoire avec free() dès qu'on n'en a plus besoin.
* L'allocation dynamique permet notamment de créer un tableau dont la taille est déterminée par une variable au moment de l'exécution.

Si vous souhaitez allouer de la mémoire pour une chaîne à l'aide de ```realloc```, vous pouvez l'utiliser pour allouer de la mémoire ou redimensionner de la mémoire existante.

La fonction ```calloc``` en C est utilisée pour allouer de la mémoire dynamique, similaire à malloc, mais avec une différence importante : calloc initialise la mémoire allouée à zéro. Cela signifie que lorsque vous utilisez calloc pour allouer de la mémoire, chaque octet de la mémoire allouée est initialisé à zéro.

Oui, lorsque vous appelez la fonction malloc en C, elle alloue de la mémoire dans ce que l'on appelle le ```tas``` (ou ```heap``` en anglais). Le tas est l'une des deux principales régions de la mémoire utilisées pour le stockage dynamique, l'autre étant la "pile" (ou "stack" en anglais).
Le tas est utilisé pour allouer de la mémoire à la demande pendant l'exécution d'un programme. L'espace mémoire réservé par malloc provient du tas, et il est généralement géré par le système d'exploitation. Vous pouvez allouer et libérer de la mémoire sur le tas à l'aide de fonctions telles que malloc, free, calloc, realloc, etc.

## Resources:
* [Automatic And Dynamic Allocation, Malloc And Free](https://intranet.hbtn.io/concepts/891)
* [Do I Cast The Result Of Malloc ?](https://stackoverflow.com/questions/605845/should-i-cast-the-result-of-malloc)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## TASKS: 

### 0. Trust no one
Write a function that allocates memory using malloc.

* Prototype: void *malloc_checked(unsigned int b);
* Returns a pointer to the allocated memory
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

```bash
amandine@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}

amandine@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
amandine@ubuntu:~/0x0b. more malloc, free$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010

amandine@ubuntu:~/0x0b. more malloc, free$ echo $?
98
```

### 1. string_nconcat
Write a function that concatenates two strings.

* Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
* If the function fails, it should return NULL
* If n is greater or equal to the length of s2 then use the entire string s2
* if NULL is passed, treat it as an empty string

```bash
amandine@ubuntu:~/0x0b. more malloc, free$ cat 1-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

amandine@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
amandine@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
Best School
```

### 2. _calloc
Write a function that allocates memory for an array, using malloc.

* Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
* The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero
* If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

```bash
amandine@ubuntu:~/0x0b. more malloc, free$ cat 2-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}

amandine@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o 2-calloc
amandine@ubuntu:~/0x0b. more malloc, free$ ./2-calloc
0x42 0x65 0x73 0x74 0x20 0x53 0x63 0x68 0x6f 0x6f
0x6c 0x21 0x20 0x3a 0x29 0x0a 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
```

### 3. array_range
Write a function that creates an array of integers.

* Prototype: int *array_range(int min, int max);
* The array created should contain all the values from min (included) to max (included), ordered from min to max
* Return: the pointer to the newly created array
* If min > max, return NULL
* If malloc fails, return NULL

```bash
amandine@ubuntu:~/0x0b. more malloc, free$ cat 3-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

amandine@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range
amandine@ubuntu:~/0x0b. more malloc, free$ ./3-array_range
0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a
```
