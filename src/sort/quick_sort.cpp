// 快速排序 时间复杂度 O(nlog2 n)
// crated by chensongsong on 2020.1.15

#include <stdio.h>

int partition(int arr[], int startIndex, int endIndex)
{
    int pivot = arr[startIndex]; //取基准值
    int mark = startIndex;       //Mark初始化为起始下标

    for (int i = startIndex + 1; i <= endIndex; i++)
    {
        if (arr[i] < pivot)
        {
            //小于基准值 则mark+1，并交换位置。
            mark++;
            int p = arr[mark];
            arr[mark] = arr[i];
            arr[i] = p;
        }
    }
    //基准值与mark对应元素调换位置
    arr[startIndex] = arr[mark];
    arr[mark] = pivot;
    return mark;
}

void sort(int arr[], int startIndex, int endIndex)
{
    if (endIndex <= startIndex)
    {
        return;
    }
    //切分
    int pivotIndex = partition(arr, startIndex, endIndex);
    sort(arr, startIndex, pivotIndex - 1);
    sort(arr, pivotIndex + 1, endIndex);
}

/**
 * 快速排序的核心思想也是分治法，分而治之。
 * 它的实现方式是每次从序列中选出一个基准值，
 * 其他数依次和基准值做比较，比基准值大的放右边，比基准值小的放左边，
 * 然后再对左边和右边的两组数分别选出一个基准值，进行同样的比较移动，
 * 重复步骤，直到最后都变成单个元素，整个数组就成了有序的序列。
 */
void sort(int arr[], int len)
{
    sort(arr, 0, len - 1);
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