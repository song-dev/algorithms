// 选择排序 时间复杂度 O(n^2)
// crated by chensongsong on 2020.1.15

#include <stdio.h>

/**
 * 1. 选择数组中最小的值与第一个位置交换，以此类推
 * 2. 保存最小的值的方案为保存下标 
 */
void sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < len ; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printfList(int *list, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", list[i]);
    }
}

int main()
{
    int list[] = {9, 1, 0, 3, 6, 7, 2, 4, 8, 5};
    int len = sizeof(list) / sizeof(int);
    printf("len: %d\n", len);
    sort(list, len);
    printfList(list, len);

    return 0;
}