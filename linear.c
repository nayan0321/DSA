#include <stdio.h>

int letSearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {1, 2, 3, 35,23, 65, 77, 87, 8, 6, 5, 6, 23, 4, 1,23,4,5,7,78,9,9};
    int size = sizeof(arr) / sizeof(int);
    printf("%d is size of array\n", size);
    int element = 99;
    int result = letSearch(arr, size, element);
    printf("The element is on %d index \n", result);

    return 0;
}