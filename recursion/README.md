# C - Récursion

# En résumé
* Une fonction récursive est une fonction qui s'appelle elle-même pendant son exécution.
* Les étapes pour construire une fonction récursive : 
	* Décomposer le problème en un ou plusieurs sous-problèmes du même type. On résout les sous-problèmes par des appels récursifs.
	* Les sous-problèmes doivent être de taille plus petite que le problème initial.
	* Enfin, la décomposition doit en fin de compte conduire à un élémentaire qui, lui, n’est pas décomposé en sous-problèmes (c’est la condition d’arrêt).
* La pile d'exécution sert à enregistrer des informations au sujet des fonctions actives dans un programme informatique.


## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function that prints a string, followed by a new line.

* Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

## 1. Why is it so important to dream? Because, in my dreams we are together
Write a function that prints a string in reverse.

* Prototype: void _print_rev_recursion(char *s);

## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function that returns the length of a string.

* Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

## 3. You mustn't be afraid to dream a little bigger, darling
Write a function that returns the factorial of a given number.

* Prototype: int factorial(int n);
* If n is lower than 0, the function should return -1 to indicate an error
* Factorial of 0 is 1

## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of x raised to the power of y.

* Prototype: int _pow_recursion(int x, int y);
* If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.

## 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number.

* Prototype: int _sqrt_recursion(int n);
* If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.

## 6. Inception. Is it possible?
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

* Prototype: int is_prime_number(int n);
