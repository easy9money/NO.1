#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int num = 0;
	/*printf("请输入num：\n");
	scanf("%d", &num);*/

	
	for (num = 1; num <= 100; num++)
	{


		///*if (num % 2 == 0)
		//{
		//	printf("这是个偶数\n");

		//}
		//else printf("哦，这是个奇数\n");*/

		if (num % 2 == 0)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}