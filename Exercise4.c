#include <stdio.h>
#include <stdlib.h>

int *integerArray(int N) {
    int *A = (int*) malloc(N * sizeof(int));
    for(int i = 0; i < N; i++) {
        A[i] = 3 * i;
    }
    return A;
}

int main() {
    int N;
    printf("Give an integer whose size is at most 100:\n");
    scanf("%d", &N);
    int *arr = integerArray(N);
    for(int i = 0; i < N; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
