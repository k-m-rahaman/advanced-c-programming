#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    printf("Enter numbers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
