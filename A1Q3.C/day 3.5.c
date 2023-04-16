#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}, max_freq = -1, i, len;
    char max_char;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for (i = 0; i < len; i++)
    {
        if (freq[str[i]] > max_freq)
        {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", max_char);
    printf("It occurs %d times\n", max_freq);

    return 0;
}

