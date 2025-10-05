#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **textBuffer = (char **)malloc(3 * sizeof(char *));
    if (textBuffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int index = 0; index < 3; index++) {
        textBuffer[index] = (char *)malloc(51 * sizeof(char));
        if (textBuffer[index] == NULL) {
            printf("Memory allocation failed\n");
            for (int j = 0; j < index; j++) free(textBuffer[j]);
            free(textBuffer);
            return 1;
        }
    }

    printf("Please input 3 strings -> ");
    for (int index = 0; index < 3; index++) {
        fgets(textBuffer[index], 51, stdin);
        textBuffer[index][strcspn(textBuffer[index], "\n")] = 0; // Remove newline
        fflush(stdin); // Clear input buffer to avoid extra Enter delays
    }

    printf("All strings -> ");
    for (int index = 0; index < 3; index++) {
        printf("%s ", textBuffer[index]);
    }
    printf("\n");

    char **tempBuffer = (char **)realloc(textBuffer, 5 * sizeof(char *));
    if (tempBuffer == NULL) {
        printf("Memory reallocation failed\n");
        for (int i = 0; i < 3; i++) free(textBuffer[i]);
        free(textBuffer);
        return 1;
    }
    textBuffer = tempBuffer;

    for (int index = 3; index < 5; index++) {
        textBuffer[index] = (char *)malloc(51 * sizeof(char));
        if (textBuffer[index] == NULL) {
            printf("Memory allocation failed\n");
            for (int j = 0; j < index; j++) free(textBuffer[j]);
            free(textBuffer);
            return 1;
        }
    }

    printf("Please input 2 more strings -> ");
    for (int index = 3; index < 5; index++) {
        fgets(textBuffer[index], 51, stdin);
        textBuffer[index][strcspn(textBuffer[index], "\n")] = 0; // Remove newline
        fflush(stdin); // Clear input buffer to avoid extra Enter delays
    }

    printf("All strings -> ");
    for (int index = 0; index < 5; index++) {
        printf("%s ", textBuffer[index]);
    }
    printf("\n");

    for (int index = 0; index < 5; index++) {
        free(textBuffer[index]);
    }
    free(textBuffer);
    return 0;
}
