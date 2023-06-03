#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s input_file output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char *input_file = argv[1];
    char *output_file = argv[2];

    FILE *input = fopen(input_file, "r");
    FILE *output = fopen(output_file, "w");

    // Check if file opening was successful
    if (input == NULL || output == NULL) {
        printf("Error: Unable to open input/output file.\n");
        exit(EXIT_FAILURE);
    }

    // Copy contents from input file to output file
    int c;
    while ((c = fgetc(input)) != EOF) {
        fputc(c, output);
    }

    // Close files
    fclose(input);
    fclose(output);

    printf("Contents of '%s' have been copied to '%s'.\n", input_file, output_file);
    return 0;
}
