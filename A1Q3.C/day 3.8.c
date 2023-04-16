#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("All possible permutations are:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}

