/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	int temp = 0;
	printf("������a,b,c\n");
	scanf("%d%d%d", &a, &b, &c);
    if (a < b)   
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a < c)  
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (b < c) 
    {
        temp=b ;
        b= c;
        c=temp ;
    }

    printf("%d ", a);
    printf("%d ", b);
    printf("%d ", c);
    return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    printf("���1-100֮��3�ı���������\n");
    int i = 0;
    for (i = 1; i < 101; i++)
    {
        if (i % 3 == 0)
            printf("%d\n", i);
    }
}