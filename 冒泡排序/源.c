#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int lenth(int* arry)
{
    int count = 0;
    while (arry)
    {
        count++;
        arry++;
    }
    return count;
}*/
/*void reverse(int* arr, int m, int n)
{
    int k;
    int f = 0;
    for (m = 0; m < n - 1; m++)
        for (f = 0; f < n-1-m; f++)
        {
            if (arr[f] > arr[f + 1])
            {
                k = arr[f];
                arr[f] = arr[f + 1];
                arr[f + 1] = k;
            };
        };
}
int main()
{
    int arr[5] = { 1,5,4,3,2 };
    int i = 0;
    //int j = lenth(arr);
    int j = 5;
    for (i = 0; i < j; i++)
        printf("%d", arr[i]);
    printf("\n");
    reverse(arr, i, j);
    for (i = 0; i < j; i++)
        printf("%d", arr[i]);
        return 0;
}*/
//第10题
/*
init(int arry[],int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        arry[i] = 0;
        printf("%d", arry[i]);
    }
    printf("\n");
}
void print(int *arry,int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
        printf("%d", arry[i]);
    printf("\n");
}
void reverse(int *arry,int len)
{
    int i = 0;
    int k = 0;
    for (i = 0; i < (len / 2); i++)
    {
        k = arry[i];
        arry[i] = arry[len - 1 - i];
        arry[len - 1 - i] = k;
    }
}
int main()
{
    int arr[] = { 1,2,4,3,5,6,7,8 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int num;
    printf("%d\n", len);
    print(arr,len);
    printf("数组操作\n1.初始化\n2.数组元素逆置\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:init(arr,len);
    case 2:reverse(arr,len);
    }
    print(arr, len);
}*/
//第11题
int reverse(int* a, int* b)
{
    int c[5] = { 0 };
    *c= a; 
    //int i = 0;
    //for (i = 0; i < 5; i++)
    //    c[i] = a[i];
    a = b;
   // for (i = 0; i < 5; i++)
    //    a[i] = b[i];
    b = c;
    //for (i = 0; i < 5; i++)
       // b[i] = c[i];
    return *a;
    return *b;
}
void print(int* arry, int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
        printf("%d", arry[i]);
    printf("\n");
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    int b[5] = { 6,7,8,9,10};
    int len = 5;
    print(a, len);
    print(b, len);
    reverse(a, b);
    print(a, len);
    print(b, len);
}
