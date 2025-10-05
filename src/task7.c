#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>
#include <stdint.h>

void *aligned_malloc(size_t size, size_t alignment) {
    void *ptr = NULL;
    size_t totalSize = size + alignment - 1;
    void *rawPointer = malloc(totalSize);
    if (rawPointer == NULL) {
        return NULL;
    }

    ptr = (void *)(((uintptr_t)rawPointer + alignment - 1) & ~(alignment - 1));
    return ptr;
}

void aligned_free(void *ptr) {
    free(ptr);
}

int main() {
    void *alignedPointer = aligned_malloc(100, 16);
    if (alignedPointer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Aligned address will be -> %p\n", alignedPointer);
    if ((uintptr_t)alignedPointer % 16 == 0) {
        printf("Alignment check passed!\n");
    } else {
        printf("Alignment check failed!\n");
    }

    aligned_free(alignedPointer);

    return 0;
}
