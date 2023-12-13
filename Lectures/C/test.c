#include<stdio.h>
#include<string.h>
void main(){
	 char mainString[] = "This is an example string";
    char subString[] = "i..s";

    // Using strstr() to find the substring
    char *result = strstr(mainString, subString);

    if (result != NULL) {
		printf("%s",result);
        printf("\nSubstring found at index: %ld\n", result - mainString);
    } else {
        printf("Substring not found\n");
    }
}