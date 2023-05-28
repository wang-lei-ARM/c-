#include<stdio.h>

#define MAX_YEAR 55
int cow[MAX_YEAR];

void mcow(int n);

int main()
{
	int input[MAX_YEAR];   //定义输入数组，存储输入信息
	mcow(MAX_YEAR);

	int i=0;
	int j=0;

	do
	{
		scanf("%d",&input[i]);
	}while(input[i++] != 0);
	
	for(j=0;j<i-1;j++)   //输出结果（循环次数=总的个数）
	{
		if( input[j] < 4)
		{
			printf("%d\n",cow[input[j]]);
		}
		else
		{
			printf("%d\n",cow[j] = cow[input[j] - 1] + cow[input[j] - 3]);
		}
	}
    return 0;

}


void mcow(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i<4)
		{
			cow[i] = i;
		}
		else
		{
			cow[i] = cow[i-3] + cow[i-1];
		}
	}
}