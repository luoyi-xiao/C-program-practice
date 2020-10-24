#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
struct S
{
	char name[20];
	int age;
};
int cmp_age(const void* e1, const void* e2)
{
	return (((struct S*)e1)->age - ((struct S*)e2)->age);
}
void print_arr(struct S arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
		printf("%d ", arr[i].age);
	}
	printf("\n");
}
int main()
{
	struct S arr[] = { {"zhangsan",20},{"lisi",80},{"wangwu",5} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_age);
	print_arr(arr, sz);
}