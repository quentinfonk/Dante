/*
** EPITECH PROJECT, 2020
** bubble
** File description:
** sort
*/

void swap(int *xp, int *yp)
{
    int temp = *xp;

    *xp = *yp;
    *yp = temp;
}

int *bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
    return (arr);
}
