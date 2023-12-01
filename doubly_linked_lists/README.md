# C - Doubly linked lists
Listes doublement chaînées
![Listes doublement chaînées](data:image/png;base64,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)

## Résumé:

Une liste chaînée double est une structure de données dans laquelle chaque nœud contient une référence à la fois vers le nœud suivant et le nœud précédent dans la séquence. Cela permet un accès bidirectionnel à la liste, ce qui peut faciliter certaines opérations par rapport à une liste simple.

## Resources:

* [What is a Doubly Linked List](https://intranet.hbtn.io/rltoken/4k13B5KYF6vxzGZpOn4lXQ)

## Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free, printf and exit
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called lists.h
* Don’t forget to push your header file
* All your header files should be include guarded

## TASKS: 

### 0. Print list

Write a function that prints all the elements of a dlistint_t list.

* Prototype: size_t print_dlistint(const dlistint_t *h);
* Return: the number of nodes
* Format: see example

```bash
julien@ubuntu:~/Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/Doubly linked lists$ 
```

### 1. List length

Write a function that returns the number of elements in a linked dlistint_t list.

* Prototype: size_t dlistint_len(const dlistint_t *h);

```bash
julien@ubuntu:~/Doubly linked lists$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/Doubly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/Doubly linked lists$ 
```

### 2. Add node

Write a function that adds a new node at the beginning of a dlistint_t list.

* Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

```bash
julien@ubuntu:~/Doubly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/Doubly linked lists$ 
```

### 3. Add node at the end

Write a function that adds a new node at the end of a dlistint_t list.

* Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
* Return: the address of the new element, or NULL if it failed

```bash
julien@ubuntu:~/Doubly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/Doubly linked lists$ 
```

### 4. Free list

Write a function that frees a dlistint_t list.

* Prototype: void free_dlistint(dlistint_t *head);

```bash
julien@ubuntu:~/Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$ 
```

### 5. Get node at index

Write a function that returns the nth node of a dlistint_t linked list.

* Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
* where index is the index of the node, starting from 0
* if the node does not exist, return NULL

```bash
julien@ubuntu:~/Doubly linked lists$ cat 5-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/Doubly linked lists$ 
```

### 6. Sum list

Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

* Prototype: int sum_dlistint(dlistint_t *head);
* if the list is empty, return 0

```bash
julien@ubuntu:~/Doubly linked lists$ cat 6-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/Doubly linked lists$ 
```

### 7. Insert at index

Write a function that inserts a new node at a given position.

* Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
* where idx is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL

Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction

```bash 
julien@ubuntu:~/Doubly linked lists$ cat 7-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/Doubly linked lists$
```

### 8. Delete at index

Write a function that deletes the node at index index of a dlistint_t linked list.

* Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
* where index is the index of the node that should be deleted. Index starts at 0
* Returns: 1 if it succeeded, -1 if it failed

```bash
julien@ubuntu:~/Doubly linked lists$ cat 8-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/Doubly linked lists$ 
```
