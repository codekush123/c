#include <stdio.h>

#define MAX 30

void printReversed(int *A, int size);

int main()
{
    int size, arr[MAX], i;

    printf("Give the number of elements:\n");
    scanf("%d\n", &size);

    while (size > MAX)
    {
        printf("The number is too big. Please retry...\n");
        printf("Give the number of elements:\n");
        scanf("%d\n", &size);
    }
    for(i = 0; i < size; i++)
    {
        scanf("%d\n", &arr[i]);
        printf("Give an integer:\n");
    }

    printf("Elements in reversed order:\n");
    printReversed(arr, size);

    return 0;
}

void printReversed(int *A, int size)
{
    int i;

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d\n", A[i]);
    }
}
