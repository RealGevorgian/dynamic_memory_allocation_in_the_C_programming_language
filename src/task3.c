#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dataBuffer = (int *)malloc(10 * sizeof(int));
    if (dataBuffer == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Please insert 10 integers (Please don't forget to press the 'space' button after each integer) -> ");
    for (int position = 0; position < 10; position++) {
        scanf("%d", &dataBuffer[position]);
    }

    int *tempBuffer = (int *)realloc(dataBuffer, 5 * sizeof(int));
    if (tempBuffer == NULL) {
        printf("Memory reallocation failed\n");
        free(dataBuffer);
        return 1;
    }
    dataBuffer = tempBuffer;

    printf("Resulting array after resizing -> ");
    for (int position = 0; position < 5; position++) {
        printf("%d ", dataBuffer[position]);
    }
    printf("\n");

    free(dataBuffer);
    return 0;
}
