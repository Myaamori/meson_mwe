#include <my_subproject.h>

/* This function will not be exported and is not
 * directly callable by users of this library.
 */
int internal_function() {
    return 0;
}

int my__func() {
    return internal_function();
}
