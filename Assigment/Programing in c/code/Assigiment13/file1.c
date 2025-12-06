#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result;

    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            result = mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
}
