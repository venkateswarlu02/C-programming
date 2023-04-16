#include <stdio.h>

int lcm(int a, int b);

int main()
{
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = lcm(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, result);

    return 0;
}

int lcm(int a, int b)
{
    static int multiple = 0;

    multiple += b;

    if ((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}

