#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int num = 0;
	/*printf("������num��\n");
	scanf("%d", &num);*/

	
	for (num = 1; num <= 100; num++)
	{


		///*if (num % 2 == 0)
		//{
		//	printf("���Ǹ�ż��\n");

		//}
		//else printf("Ŷ�����Ǹ�����\n");*/

		if (num % 2 == 0)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}