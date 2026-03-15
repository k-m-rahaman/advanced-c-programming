#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    start = str;
    end = str + len - 1;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
