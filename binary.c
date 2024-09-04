#include <stdio.h>

int binarySearch(int array[], int size, int element)
{
    int low, high, mideum;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mideum = (low + high) / 2;
        if (array[mideum] == element)
        {
            return mideum;
        }
        else if (array[mideum] < element)
        {
            low = mideum++;
        }
        else
        {
            high = mideum--;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 123, 145, 678};
    int size = sizeof(arr) / sizeof(int);
    int element = 2;
    int letSearch = binarySearch(arr, size, element);
    printf("Element found on %d index", letSearch);

    return 0;
}