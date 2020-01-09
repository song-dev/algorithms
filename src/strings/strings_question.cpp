#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 算法-字符串 不借助额外空间和系统函数，删除空字符串
int string_trim(char *src)
{
    unsigned int len = strlen(src);
    char *prev = src, *current = src;
    for (unsigned int i = 0; i < len; i++)
    {
        if (*current != ' ')
        {
            *prev++ = *current++;
        }
        else
        {
            current++;
        }
    }
    // 最后一位置结束符
    *prev = '\0';
    return 1;
}

int main()
{
    char dest[] = "  h  e  llo w  or ld .  ";
    printf("Pre-processing string: %s\n", dest);
    string_trim(dest);
    printf("Post-processing string: %s\n", dest);
    return 0;
}
