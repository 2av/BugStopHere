#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc, *ptr_calloc, *ptr_realloc;
    int size = 10; // Number of elements in the array

    // Using malloc to allocate memory for an array of 5 integers
    ptr_malloc = (int *)malloc(size * sizeof(int));
	printf("Memory allocated successfully using malloc:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr_malloc[i]); // Values will be garbage/uninitialized
    }
	
	
	ptr_calloc = (int *)calloc(size, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation failed using calloc\n");
        return 1;
    }
	printf("Memory allocated successfully using malloc:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr_calloc[i]); // Values will be garbage/uninitialized
    }

    /*
	if (ptr_malloc == NULL) {
        printf("Memory allocation failed using malloc\n");
        return 1;
    }

    // Using calloc to allocate memory for an array of 5 integers
    ptr_calloc = (int *)calloc(size, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation failed using calloc\n");
        return 1;
    }

    printf("Memory allocated successfully using malloc:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr_malloc[i]); // Values will be garbage/uninitialized
    }

    printf("\nMemory allocated successfully using calloc:\n");
    for (int i = 0; i < size; i++) {
		ptr_calloc[i]=10*i;
        printf("%d ", ptr_calloc[i]); // Values will be initialized to 0
    }
	
	printf("\nMemory allocated successfully using re-calloc:\n");
	ptr_calloc = (int *)realloc(ptr_calloc ,10* sizeof(int));
    
	for (int i = 0; i < 10; i++) {
        printf("%d ", ptr_calloc[i]); // Values will be garbage/uninitialized
    }
	
	// Freeing the allocated memory
    free(ptr_malloc);
    free(ptr_calloc);
*/
    return 0;
}
