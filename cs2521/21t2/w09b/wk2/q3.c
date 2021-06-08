#include <stdio.h>
#include <stdbool.h>

#include "List.h"


bool listIsSortedRec(List list) {
	// Let's try coming up with only the recursive solution.

  	// Base cases?
  	// Recursive case?
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

	char *status = listIsSortedRec(list)
		? "sorted"
		: "not sorted";
    printf("The list is %s\n", status);

    freeList(list);
	return 0;
}