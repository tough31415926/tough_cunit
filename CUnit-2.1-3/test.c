#include <CUnit/TestDB.h>




int main(int argc, char *argv[])
{
        CU_pSuite pSuite = NULL;
        
        if (CU_initialize_registry() != CU_SUCCESS)
                exit(1);

        pSuite = CU_add_suite("Suite1", NULL, NULL);
        CU_add_test(pSuite, "t1", f1);

        CU_basic_set_mode(CU_BRM_VERBOSE);
        CU_basic_run_tests();
        CU_cleanup_registry();

        return 0;
}
