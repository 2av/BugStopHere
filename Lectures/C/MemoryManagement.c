#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int *ptr_calloc;
    int size;
	
	printf("Enter the number to add :");
	scanf("%d",&size);
	
    ptr_calloc = (int *)calloc(size, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation failed using calloc\n");
        return 1;
    }
	for (int i = 0; i < size; i++) {
        printf("%d ", ptr_calloc[i]); // Values will be garbage/uninitialized
    }
	
	free(ptr_calloc);
	
}