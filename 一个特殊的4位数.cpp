#include<stdio.h>
int main()
{
	int i;
	for (i = 1000; i < 10000; i++)//�γ�ѭ��
	{
		int a, b, c, d;
		a = i / 1000;
		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i % 10;
		if (a == d && b == c)//�ҳ������������
		{
			printf("%d\n", i);
		}
	}
	return 0;
}