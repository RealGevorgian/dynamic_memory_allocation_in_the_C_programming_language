#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_realloc(void *pointer, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }
    if (pointer == NULL) {
        return malloc(newSize);
    }

    void *newPointer = malloc(newSize);
    if (newPointer == NULL) {
        return NULL;
    }

    // (assumes original size is at least as large as needed)
    memcpy(newPointer, pointer, newSize);
    free(pointer);
    return newPointer;
}

int main() {
    int *dataArray = (int *)malloc(5 * sizeof(int));
    if (dataArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Input 5 integers (Please press the 'space' button after each integer) -> ");
    for (int index = 0; index < 5; index++) {
        scanf("%d", &dataArray[index]);
    }

    int *tempArray = (int *)my_realloc(dataArray, 3 * sizeof(int));
    if (tempArray == NULL) {
        printf("Reallocation failed!\n");
        free(dataArray);
        return 1;
    }
    dataArray = tempArray;

    printf("Array after resizing -> ");
    for (int index = 0; index < 3; index++) {
        printf("%d ", dataArray[index]);
    }
    printf("\n");

    free(dataArray);
    return 0;
}
