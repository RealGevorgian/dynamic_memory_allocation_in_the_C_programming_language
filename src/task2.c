#include <stdio.h>
#include <stdlib.h>

int main() {
    int elementCount;
    printf("Please insert the number of elements -> ");
    scanf("%d", &elementCount);

    int *dataArray = (int *)calloc(elementCount, sizeof(int));
    if (dataArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Changed array after calloc -> ");
    for (int index = 0; index < elementCount; index++) {
        printf("%d ", dataArray[index]);
    }
    printf("\n");

    printf("Enter %d integers (Please don't forget to press the 'space' button after each integer) -> ", elementCount);
    for (int index = 0; index < elementCount; index++) {
        scanf("%d", &dataArray[index]);
    }

    printf("Updated array -> ");
    for (int index = 0; index < elementCount; index++) {
        printf("%d ", dataArray[index]);
    }
    printf("\n");

    float meanValue = 0.0;
    for (int index = 0; index < elementCount; index++) {
        meanValue += dataArray[index];
    }
    meanValue /= elementCount;
    printf("The average of the array -> %.1f\n", meanValue);

    free(dataArray);
    return 0;
}
