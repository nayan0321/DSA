#include <stdio.h>

void displayArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
void deletElement(int array[], int size, int index)
{
    printf("Deleted element is %d ", array[index]);
    for (int i = index; i < size - 1; i++)

    {
        array[i] = array[i + 1];
    }
}

int main()
{
    int arr[50] = {1, 2, 3, 56, 7, 88, 94};
    int index = 3;
    int size = 7;
    displayArr(arr, size);
    deletElement(arr, size, index);
    size--;
    printf("\n");
    displayArr(arr, size);
    return 0;
}