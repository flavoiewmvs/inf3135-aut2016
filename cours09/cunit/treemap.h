#include <stdbool.h>

// --------------- //
// Data structures //
// --------------- //

struct TreeNode;

typedef struct {
    struct TreeNode *root; // Points to the root
} TreeMap;

// --------- //
// Functions //
// --------- //

/**
 * Cree et retourne une table associative vide.
 *
 * @returns  La table associative
 */
TreeMap treemapCreate();

/**
 * Retourne la valeur associee a la cle donnee.
 *
 * @param t    La table associative
 * @param key  La cle
 * @returns    La valeur associee
 */
char *treemapGet(const TreeMap *t, char *key);

/**
 * Ajoute ou remplace la paire (key, value).
 *
 * Note : si la cle est deja presente dans la table, alors
 * la valeur associee est ecrasee avec la nouvelle valeur.
 *
 * @param t      La table associative
 * @param key    La cle
 * @param value  La valeur
 */
void treemapSet(TreeMap *t, char *key, char *value);

/**
 * Retourne vrai si et seulement si la cle apparaît dans la table.
 *
 * @param t    La table associative
 * @param key  La cle a rechercher
 * @returns    Vrai si et seulement si la cle est presente
 */
bool treemapHasKey(const TreeMap *t, char *key);

/**
 * Affiche une table associative sur la sortie standard.
 *
 * @param t  La table associative a afficher
 */
void treemapPrint(const TreeMap *t);

/**
 * Libere l'espace memoire utilise par une table associative.
 *
 * @param t  La table a supprimer
 */
void treemapDelete(TreeMap *t);
