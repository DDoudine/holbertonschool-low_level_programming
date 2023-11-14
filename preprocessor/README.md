# C - Preprocessor

## En résumé
* Le préprocesseur est un programme qui analyse votre code source et y effectue des modifications avant la compilation.
* L'instruction de préprocesseur #include insère le contenu d'un autre fichier.
* L'instruction #define définit une constante de préprocesseur. Elle permet de remplacer un mot-clé par une valeur dans le code source.
* Les macros sont des morceaux de code tout prêts définis à l'aide d'un #define  . Ils peuvent accepter des paramètres.
* Il est possible d'écrire des conditions en langage préprocesseur pour choisir ce qui sera compilé. On utilise notamment les mots-clés #if  , #elif et #endif  .
* Pour éviter qu'un fichier .h ne soit inclus un nombre infini de fois, on le protège à l'aide d'une combinaison de constantes de préprocesseur et de conditions. Tous vos futurs fichiers .h devront être protégés de cette manière.

# 0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

# 1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359

# 2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

*You are allowed to use the standard library

# 3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.
/**
  *Dans cette macro, ABS(x) renvoie la valeur absolue de x.
  *Elle utilise une expression conditionnelle pour vérifier 
  *si x est supérieur ou égal à zéro. 
  *Si c'est le cas, il renvoie simplement x, sinon, il renvoie -x
  */

# 4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
/**
 *#ifndef SUM_H  /*Si SUM_H n'est pas défini (évite la double *inclusion)*/
 *#define SUM_H  /*Définit SUM_H pour indiquer que l'en-tête *est inclus*/
 *#define SUM(x, y) ((x) + (y))  /*Macro qui retourne la *  *somme de x et y*/
 *
 *#endif  /*Fin de la garde d'inclusion*/
 */
