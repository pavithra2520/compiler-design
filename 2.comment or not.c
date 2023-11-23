#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    printf("Enter the line of code: ");
    fgets(input, sizeof(input), stdin);
    if (strstr(input, "//") == input) {
        printf("This is a single-line comment.\n");
    }
    else if (strstr(input, "/*") != NULL && strstr(input, "*/") != NULL) {
        printf("This is a multi-line comment.\n");
    }
    else {
        printf("This is not a comment.\n");
    }
    return 0;
}
