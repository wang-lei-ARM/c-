#include <stdio.h>

/* ����һ�������¶ȣ�Ҫ����������¶ȡ���ʽΪ c=5(F-32)/9��ȡλ2С�� */

int main()
{
	float c;
	float F;

	scanf("%f",&F);
	c = (5*(F-32)/9);
	printf("c=%.2f",c);
	return 0;
}