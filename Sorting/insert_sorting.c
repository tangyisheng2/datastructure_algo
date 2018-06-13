#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

//定义数组
int a[SIZE] = {49, 38, 65, 97, 76, 13, 27, 49};

void direct_insert_sorting(int data[])
{
    int i, j;
    for (i = 1; i <= SIZE; i++) //遍历数组
    {
        if (data[i] < data[i - 1])
        {
            int tmp = data[i];

            //在子序列中后移数目
            for (j = i - 1; data[j] > tmp; j--)
            {
                data[j + 1] = data[j]; //数据后移
            }
            data[j + 1] = tmp;
        }
    }
}

void binary_insertion_sort(int data[])
{
    int i, j;
    for (i = 1; i <= SIZE; i++)
    {
        if (data[i] < data[i - 1])
        {
            int tmp = data[i];
            int max = i - 1, min = 0, mid = (min + max) / 2;
            //折半查找
            for (max = i - 1,min = 0; max > min;)
            {
                if (tmp < mid)
                {
                    max = mid - 1;
                }
                else
                {
                    min = mid + 1;
                }
                mid=(min+max)/2;
            }
            //移位
            for (j = i - 1; j >= mid; j--)
            {
                data[j + 1] = data[j];
            }
            //把值插入
            data[j+1] = tmp;
        }
    }
}

int main()
{
    //direct_insert_sorting(a);
    binary_insertion_sort(a);
    system("pause");
    return 0;
}
