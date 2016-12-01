#include <stdio.h>
#include "treemap.h"
#include "CUnit/Basic.h"

void test_treemapSetGet(void) {
    TreeMap t = treemapCreate();
    treemapSet(&t, "prenom", "alice");
    treemapSet(&t, "nom", "tremblay");
    treemapSet(&t, "sexe", "feminin");
    treemapSet(&t, "ville", "montreal");
    treemapSet(&t, "province", "quebec");
    treemapSet(&t, "pays", "canada");
    treemapSet(&t, "age", "25");
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "prenom"), "alice")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "age"), "25")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "nom"), "tremblay")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "sexe"), "feminin")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "ville"), "montreal")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "province"), "quebec")
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "pays"), "canada")
}

void test_treemapReplace(void) {
    TreeMap t = treemapCreate();
    treemapSet(&t, "prenom", "alice");
    treemapSet(&t, "nom", "tremblay");
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "prenom"), "alice")
    treemapSet(&t, "prenom", "bob");
    CU_ASSERT_STRING_EQUAL_FATAL(treemapGet(&t, "prenom"), "bob")
    treemapDelete(&t);
}

void test_treemapHasKey(void) {
    TreeMap t = treemapCreate();
    treemapSet(&t, "prenom", "alice");
    CU_ASSERT(treemapHasKey(&t, "prenom"))
    CU_ASSERT_FALSE(treemapHasKey(&t, "nom"))
    treemapDelete(&t);
}

int main() {
    CU_pSuite pSuite = NULL;
    // Initialisation
    if (CU_initialize_registry() != CUE_SUCCESS )
        return CU_get_error();

    // Ajout d'une suite
    pSuite = CU_add_suite("Testing set and get", NULL, NULL);
    if (pSuite == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }
    // Ajout de tests a la suite
    if (CU_add_test(pSuite, "Test Set and get",     test_treemapSetGet)  == NULL ||
        CU_add_test(pSuite, "Test Replacing value", test_treemapReplace) == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }
    // Ajout d'une deuxieme suite
    pSuite = CU_add_suite("Testing hasKey", NULL, NULL);
    if (pSuite == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }
    // Ajout de tests a la suite
    if (CU_add_test(pSuite, "Test hasKey", test_treemapHasKey)  == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Lancement des tests
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
