/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

int CopInt(const void* xp, const void* yp)
{
	int x = *(const int*)xp;
	int y = *(const int*)yp;
	if (x > y)
	{
		return 1;
	}
	else if (x < y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void swap(char* p, char* q, size_t num)
{
	while (num)
	{
		char tmp = *p;
		*p = *q;
		*q = tmp;
		num--;  //һ���ֽ�һ���ֽڽ�����������ָ��������һ�ֽ�
		p++, q++;
	}
}
void my_qsort(void* base, size_t num, size_t size, int(*comp)(const void*, const void*))
{
	assert(base);
	assert(comp);
	char* p = (char*)base;//���ַ�ָ��ָ��������ʼ��ַ���˺�ָ��ÿ+1������ƶ�1�ֽ�
	//����������ð������
	for (int i = 0; i < num - 1; i++) //ð���������������ڲ�Ϊ���˱ȽϽ���
	{
		int flag = 0; //��־�����һ�˺��־λû��˵������������
		for (int j = 0; j < num - i - 1; j++) //���бȽϽ���
		{
			if (comp(p + j * size, p + (j + 1) * size) > 0)//�������ͱȽϣ���ǰ���ں�ʱ
			{
				swap(p + j * size,p + (j + 1) * size, size);
				flag = 1;
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,4,5,6,1,2,3 };
	int num = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, num, sizeof(int), CopInt);
	for (int i = 0; i < num; i++)
	{
		printf("%3d", arr[i]);
	}
}*/