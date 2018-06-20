#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

int a[SIZE] = {5, 16, 20, 27, 30, 36, 44, 55, 60, 67, 71};

int binary_search(int data[SIZE], int target)
{
    int min = 0, max = SIZE - 1, mid = (min + max) / 2;
    while (min < max)
    {
        if (target < data[mid])
        {
            max = mid - 1;
            mid = (min + max) / 2;
        }
        else if (target > data[mid])
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
        else
            return mid;
    }
}

int main()
{
    int target = 44;
    binary_search(a, target);
}