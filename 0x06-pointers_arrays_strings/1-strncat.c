#include <stdio.h>

char *my_strcat(char *dest, const char *src) {
    size_t i = 0, j = 0;

#ifdef putchar
    // just using the putchar identifier for fun
#endif

    // Find the end of the first string
    while (dest[i] != '\0') {
        i++;
    }

    // Append the second string to the end of the first string
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Add a null terminator to the end of the concatenated string
    dest[i] = '\0';

    // return a pointer to dest.
    return dest;
}

int main() {
    char hello[20] = "Hello ";
    char world[] = "World!";

    printf("%s\n", my_strcat(hello, world));
    return 0;
}
