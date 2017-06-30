#include<stdio.h>
#include<string.h>
int main()
{
    char *str1 = "ht/";
    char str2[100] = "http://see.xidian.edu.cn/cpp/u/shipin_liming/";
    printf("strlen(str1)=%d, sizeof(str1)=%d\n", strlen(str1), sizeof(str1));
    printf("strlen(str2)=%d, sizeof(str2)=%d\n", strlen(str2), sizeof(str2));

    return 0;
}
