#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc, *ptr_calloc;
    int size = 5; // Number of elements in the array

    // Using malloc to allocate memory for an array of 5 integers
    ptr_malloc = (int *)malloc(size * sizeof(int));
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
        printf("%d ", ptr_calloc[i]); // Values will be initialized to 0
    }

    // Freeing the allocated memory
    free(ptr_malloc);
    free(ptr_calloc);

    return 0;
}
