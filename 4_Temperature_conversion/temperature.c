#include <stdio.h>

/* 输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数 */

int main()
{
	float c;
	float F;

	scanf("%f",&F);
	c = (5*(F-32)/9);
	printf("c=%.2f",c);
	return 0;
}