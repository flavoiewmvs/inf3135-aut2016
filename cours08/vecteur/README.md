# Créer sa propre bibliothèque

Ce répertoire contient des fichiers illustrant comment créer sa propre
bibliothèque statique C.

## Contenu

- `README.md` : ce fichier;
- `test_vec3d.c` : un fichier permettant de tester la bibliothèque `vec3d`;
- `vec3d.c` : l'implémentation de la bibliothèque;
- `vec3d.h` : l'interface de la bibliothèque.

# Fonctionnement

Dans un premier temps, il faut compiler le fichier source normalement, à l'aide
de la commande

    gcc -o vec3d.o -c vec3d.c

On obtient ensuite un fichier binaire `vec3d.o`. Ensuite, on doit archiver ce
fichier dans une bibliothèque statique :

    ar -cvq libvec3d.a vec3d.o

Noter que le nom du fichier est important. Il doit commencer par `lib` et
terminer par `.a`, pour qu'on puisse utiliser l'option `-lvec3d` lors de
l'édition des liens. C'est tout ! Maintenant, tout ce que vous avez à faire
pour utiliser votre bibliothèque est de rendre les deux fichiers `vec3d.h` et
`libvec3d.a` accessibles pour `gcc`.
