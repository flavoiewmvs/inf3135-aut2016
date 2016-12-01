# CUnit

Exemple d'utilisation de CUnit.

Un Makefile est inclus pour compiler. Cependant, il est probable que vous
deviez modifier le Makefile pour que ça fonctionne puisqu'il suppose que CUnit
a installé les fichiers `.h` dans le répertoire `/opt/local/include` et les
bibliothèques dans le répertoire `/opt/local/lib`.

Ensuite, il suffit d'entrer
~~~
make
~~~
pour compiler et
~~~
make test
~~~
pour lancer les suites de tests.
