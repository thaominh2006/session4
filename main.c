#include <stdio.h>
#include <stdlib.h>

int findFirst(int arr[], int countElement, int findNumberValue)
{
    int start = 0, end = countElement - 1, result = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (findNumberValue == arr[mid])
        {
            result = mid;
            end = mid - 1;
        }else if (findNumberValue > arr[mid])
        {
            start = mid + 1;
        }else
        {
            end = mid - 1;
        }
    }
    return result;
}

int findSecond(int arr[], int countElement, int findNumberValue)
{
    int start = 0, end = countElement - 1, result = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (findNumberValue == arr[mid])
        {
            result = mid;
            start = mid + 1;
        }else if (findNumberValue > arr[mid])
        {
            start = mid + 1;
        }else
        {
            end = mid - 1;
        }
    }
    return result;
}

int main(void)
{
    int arr[10] =  {1, 3, 3, 3, 5, 6, 8, 8, 9, 10};
    int result = findFirst(arr, 10, 3);
    int resultLast = findSecond(arr, 10, 3);
    printf("Phan tu dau tien duoc tim thay %d \n", result);
    printf("Phan tu cuoi cung duoc tim thay %d \n", resultLast);
    return 0;
}
