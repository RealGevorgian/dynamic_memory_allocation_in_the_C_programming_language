#include <stdio.h>
#include <stdlib.h>

int main() {
    int studentCount;
    printf("Please insert the number of students -> ");
    scanf("%d", &studentCount);

    int *gradeList = (int *)malloc(studentCount * sizeof(int));
    if (gradeList == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Input the grades (Please press the 'space' button after each grade) -> ");
    for (int index = 0; index < studentCount; index++) {
        scanf("%d", &gradeList[index]);
    }

    int highestGrade = gradeList[0];
    int lowestGrade = gradeList[0];
    for (int index = 1; index < studentCount; index++) {
        if (gradeList[index] > highestGrade) {
            highestGrade = gradeList[index];
        }
        if (gradeList[index] < lowestGrade) {
            lowestGrade = gradeList[index];
        }
    }

    printf("Highest grade -> %d\n", highestGrade);
    printf("Lowest grade -> %d\n", lowestGrade);

    free(gradeList);
    return 0;
}
