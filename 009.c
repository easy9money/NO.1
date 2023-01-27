#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//这样就无限循环咧
//int main()
//{
//	while (1)
//		printf("22H\n");
//
//	return 0;
// }

//int main()
//{
//	int i = 1;
//
//	/*while (i <= 5)
//	{
//		if (i == 4)
//		{
//			continue;//在while循环中，continue的作用是跳过本次循环continue沟边的代码
//                     直接去判断部分，看是否进行下一次循环
//		}
//		printf("%d", i);
//		i++;
//	}*/
//
//	while (i <= 5)
//	{
//		if (i == 4)
//		{
//			break;//在while循环中，break用于终止循环
//		}
//		printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//
//	//ctrl+z  getcahr就读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N)：>");
//	
//
//	 
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//
//	}
//	return 0;
//}


//#include<math.h>
//#define f(x) x*x-5.5*x+sin(x)
//int main()
//{
//	float x, max;
//	max = f(0.0);
//	for (x = 0.5; x <= 10; x = x + 0.5)
//		if (f(x) > max)max = f(x);
//	printf("%f\n", max);
//	return 0;
//
//}

//int main()
//{
//	int i, j; char k;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j < i; j++) putchar(' ');
//		k = 'a';
//		for (j = 9 - 2 * i; j > 0; j--)
//		{
//			k = (char)k++;
//			printf("%c", k - 1);
//
//		}
//		putchar('\n');
//
//	}
//	return 0;
//}


//int main()
//{
//	int m, n, k;
//	while (1)
//	{
//		scanf("%d %d", &m, &n);
//		if (m > 0 && n > 0)break;
//
//	}
//	k = m > n ? n : m;
//	while (m % k != 0 || n % k != 0) k--;
//	printf("%d\n", k);
//	return 0;
//
//}

//#define F (t<=n && t*2>=n)
//int main()
//{
//	int m, t, n;
//	while (scanf("%d", &n), n > 0)
//	{
//		m = 0; t = 1;
//		while (!F)
//		{
//			t *= 2;
//			m++;
//
//		}
//		printf("%d  %d\n", n, m);
//
//	}
//	return 0;
//}

int main()
{
	int n, m, k;
	while (scanf("%d", &n)!= EOF)
	{
		m = n; k = 0;
		
		while (m != 0)
		{
			k++;
			m/= 10;
		}
		printf("%d是%d位整数\n", n, k);

	}
	return 0;
}