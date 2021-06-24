

#include <string.h>

#include <stdio.h>

#include "tokenizer.h"

#include "history.h"



/*

    The following is a simple testing script with a single example of input

    your code is expected to handle. The testing of your code should be more

    thorough and explore other input cases.

*/



#define TEST_TOKENIZER 1

#define TEST_HISTORY 1



/* MinUnit: http://www.jera.com/techinfo/jtns/jtn002.html */

#define mu_assert(message, test) do { if (!(test)) return message; } while (0)

#define mu_run_test(test) do { char *message = test(); tests_run++; if (message) return message; } while (0)

int tests_run;

/* end MinUnit */





/* Tokenizer test cases */

static char *test_string_length() {

  mu_assert("string_length('happy') == 5", string_length("happy") == 5);

  return 0;

}

static char *test_is_valid_character() {

  mu_assert("is_valid_character(' ') == 0", is_valid_character(' ') == 0);

  mu_assert("is_valid_character('h') == 1", is_valid_character('h') == 1);

  return 0;

}


