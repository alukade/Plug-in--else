#include<stdio.h>
int main()
{
	char isRain, isFree;

	printf("�Ƿ��пգ���Y/N��");
	scanf_s("%c", &isFree);

	getchar();//��ȡһ���޷����ַ����Դ������ε�һ�������Ŀո�

	printf("�Ƿ����ꣿ��Y/N��");
	scanf_s("%c", &isRain);

	if (isFree == 'Y')
	{
		if (isRain =='Y')
		{
			printf("�������ɡ\n");
		}
		else
		{
			printf("һ�������\n");
		}
	}
	else//���û�գ���ô���Ƿ������û������
	{
		printf("�п��ٳ�����\n");
	}
	return 0;
}