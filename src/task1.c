#include <stdio.h>
#include <stdlib.h>

int main(){
	int count;
	printf("How many numbers should we include? (Array size) -> ");
	scanf("%d", &count);

	int *array = (int *)malloc(count * sizeof(int));
    	if (array == NULL) {
        printf("Memory allocation failed\n");
	return 1;
	}

	printf("Enter %d integers (Please don't forget to press the 'space' button after each integer) -> ", count);
    	for (int i = 0; i < count; i++) {
        scanf("%d", &array[i]);
    	}
    	
	int sum = 0;
    	for (int i = 0; i < count; i++) {
        sum += array[i];
    	}
    	printf("Sum of the array -> %d\n", sum);

    	free(array);

    	return 0;

}

