// 插入排序 时间复杂度 O(n^2)
// crated by chensongsong on 2020.1.15

#include <stdio.h>

/**
 * 1. 将数据分为左和右， 
 */
void sort(int *arr, int len)
{
    for (int i = 1; i < len; ++i)
    {
        int value = arr[i];
        int j = 0; //插入的位置
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > value)
            {
                arr[j + 1] = arr[j]; //移动数据
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = value; //插入数据
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