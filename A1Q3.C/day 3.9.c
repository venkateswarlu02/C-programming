#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int i, n;

    /* Input size and elements of array1 */
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    /* Copying elements of array1 to array2 using pointer */
    int *p1 = arr1, *p2 = arr2;
    for(i=0; i<n; i++)
    {
        *(p2+i) = *(p1+i);
    }

    /* Printing the contents of array1 and array2 */
    printf("\nArray1: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray2: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

