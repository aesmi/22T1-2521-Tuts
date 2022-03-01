#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


/**
 * Determines if a string is a palindrome.
 *
 * Time complexity:
 * (where n is the length of the string)
 */
bool isPalindrome(char *s) {
    // TODO: Implement the function, and analyse its time complexity
    return false;
}


int main(int argc, char **argv) {
    assert(argc > 1);

    char *status = isPalindrome(argv[1]) ? "is" : "is not";
    printf("%s %s a palindrome", argv[1], status);

    return EXIT_SUCCESS;
}
