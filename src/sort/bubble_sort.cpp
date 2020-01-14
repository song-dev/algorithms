// 冒泡排序算法
// crated by chensongsong on 2020.1.14

#include <stdio.h>
#include <stdlib.h>

/**
 * 1. 从前到后遍历
 */
void sort(int *list, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (list[i] > list[j])
            {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    return;
}

/**
 * 冒泡排序优化，当一轮排序无交换位置，则判断为当前位置为规整的
 */
void sort_two(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int isSorted = 1;
        for (int j = 0; j < len - 1 - i; j++)
        {
            int temp = 0;
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            break;
        }
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
    // sort(list, len);
    sort_two(list, len);
    printfList(list, len);

    return 0;
}