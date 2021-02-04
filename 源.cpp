#include<stdio.h>
int main()
{
	char isRain, isFree;

	printf("是否有空？（Y/N）");
	scanf_s("%c", &isFree);

	getchar();//获取一个无符号字符，以此来屏蔽第一次输入后的空格

	printf("是否下雨？（Y/N）");
	scanf_s("%c", &isRain);

	if (isFree == 'Y')
	{
		if (isRain =='Y')
		{
			printf("请带好雨伞\n");
		}
		else
		{
			printf("一起来玩吧\n");
		}
	}
	else//如果没空，那么问是否下雨就没意义啦
	{
		printf("有空再出来吧\n");
	}
	return 0;
}