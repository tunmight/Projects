#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    char path[PATH_MAX];
    char filename[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    char *res = realpath(filename, path);
    if (res != NULL) {
        printf("File path: %s\n", path);
    } else {
        printf("Error: %s does not exist.\n", filename);
    }

    return 0;
}
