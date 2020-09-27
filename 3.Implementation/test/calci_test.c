
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <Calci.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_greater(void);
void test_lesser(void);
void test_andgate(void);
void test_orgate(void);
void test_nandgate(void);
void test_norgate(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "lesser", test_lesser);
  CU_add_test(suite, "andgate", test_lesser);
  CU_add_test(suite, "orgate", test_lesser);
  CU_add_test(suite, "nandgate", test_lesser);
  CU_add_test(suite, "norgate", test_lesser);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(70 == add(35, 45));
  
  /* Dummy fail*/
  CU_ASSERT(10000 == add(1290, 8000));
}

void test_subtract(void) {
  CU_ASSERT(3== subtract(10,7));
  
  /* Dummy fail*/
  CU_ASSERT(99 == subtract(700,800));
}

void test_multiply(void) {
  CU_ASSERT(10 == multiply(2, 5));
  
  /* Dummy fail*/
  CU_ASSERT(20 == multiply(3, 10));
}

void test_divide(void) {
  CU_ASSERT(3 == divide(9, 3));
  
  /* Dummy fail*/
  CU_ASSERT(5 == divide(8,2));
}

void test_greater(void) {
  CU_ASSERT(45 == greater(23, 45));
  
  /* Dummy fail*/
  CU_ASSERT(342 == greater(342, 209));
}

void test_lesser(void) {
  CU_ASSERT(34 == lesser(34,57));
  
  /* Dummy fail*/
  CU_ASSERT(65 == lesser(88, 65));
}

void test_andgate(void) {
  CU_ASSERT(0 == andgate(0,0));
  
  /* Dummy fail*/
  CU_ASSERT(0 == andgate(1, 1));
}

void test_orgate(void) {
  CU_ASSERT(1 == orgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(0 == orgate(1, 1));
}

void test_nandgate(void) {
  CU_ASSERT(1 == nandgate(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(1 == nandgate(1, 1));
}

void test_norgate(void) {
  CU_ASSERT(0 == norgate(1,1));
  
  /* Dummy fail*/
  CU_ASSERT(1 == norgate(1, 1));
}


