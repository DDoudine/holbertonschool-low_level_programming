# C - Static libraries

Une bibliothèque statique, également appelée bibliothèque statique ou archive statique, a généralement le format de fichier suivant :

Extension de fichier : Le format de fichier le plus courant pour les bibliothèques statiques sur les systèmes Unix et Linux est l'extension ".a" (pour "archive"). Par exemple, une bibliothèque statique en C pourrait avoir un nom de fichier tel que "libmystaticlibrary.a".

Format de l'archive : Les bibliothèques statiques sont généralement des archives qui regroupent un ensemble de fichiers objets (fichiers binaires compilés) en un seul fichier. Ces fichiers objets contiennent le code source précompilé des fonctions et des routines incluses dans la bibliothèque. Le format de l'archive peut varier, mais l'outil couramment utilisé pour créer et gérer ces archives sur les systèmes Unix/Linux est "ar".

Contenu : L'archive peut contenir plusieurs fichiers objets compilés qui sont liés au programme lors de la compilation. Lorsque vous compilez un programme en utilisant une bibliothèque statique, le compilateur extrait uniquement les fichiers objets pertinents de la bibliothèque et les incorpore dans le programme final.

Utilisation : Pour utiliser une bibliothèque statique dans un programme, vous devez spécifier le chemin vers la bibliothèque lors de la compilation et de l'édition de liens. Par exemple, avec le compilateur GCC, vous pouvez utiliser l'option "-l" suivie du nom de la bibliothèque sans l'extension ".a". Par exemple, pour utiliser la bibliothèque statique "libmystaticlibrary.a", vous utiliseriez l'option de compilation -lmystaticlibrary.

## 0. A library is not a luxury but one of the necessities of life

Create the static library libmy.a containing all the functions listed below:

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

## 1. Without libraries what have we? We have no past and no future

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
