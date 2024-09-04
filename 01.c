#include <stdio.h>

void displayArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int makeInser(int arr[], int size, int element, int index, int maxsize)
{
    if (size > 100)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main()
{
    int arr[100] = {1, 2, 43, 56, 87};
    int size = 5;
    int element = 21;
    int index = 3;
    int maxsize = 100;
    displayArr(arr, size);
    makeInser(arr, size, element, index, maxsize);
    size++;
    printf("\n");
    displayArr(arr, size);

    return 0;
}