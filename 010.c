#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//循环体内改变循环变量
//int main()
//{
//     int i = 0;
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d ", i);
//         i--;
//     }
//     return 0;
//}


//int main()
//{
//	int j = 0;
//	int k = 0;
//
//	for (j = 0; j < 4; )
//	{
//		for (k = 0; k < 4; )
//		{
//			printf("22H\n");
//			k++;
//		}
//		j++;
//	}
//	
//	return 0;
//}

//这是一个笔试题----结果是循环0次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	           //此处k等于0，就是等于假的意思，一次循环都没进
//	for (i = 0, k = 0; k = 0; k++)
//		k++;
//	return 0;
//}

//计算n！的和

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入m的值：\n", m);
//	scanf("%d", &m);
//	for (n = 1; n<=m; n++)
//	{
//		ret *= n;
//		sum = sum + ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//
//		}
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//
//	return 0;
//	 
//}

//简化代码

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//
//	}
//	printf("%d", sum);
//
//	return 0;
//	
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//在arr这个数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = 9;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if(arr[mid]<k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("臣妾办不到啊\n");
//
//	}
//	return 0;
//}


//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i = i + 1)
//	{
//		sum += i;
//
//	}
//	printf("1+2...+100=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0, score = 0, sum = 0;
//	double ave = 0.0;
//	printf("Input score:");
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &score);
//		printf("%d", score);
//		sum += score;
//
//	}
//	printf("\n");
//	ave = (double)sum / 10;
//	printf("ave=%lf\n", ave);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 1000; i = i + 3)
//	
//		if (i % 100 == 2)
//		
//			printf("%4d", i);
//		
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 25; i++)
//	{
//		printf("%c ", 'A' + i);
//	}
//	printf("\n");
//	for (i = 25; i >= 0; i--)
//	{
//		printf("%c ", 'A' + i);
//
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int m = 0, n = 0, max = 0;
//	printf("请输入10个数：\n");
//	scanf("%d",&m);
//	printf("%d", m);
//	max = m;
//	for (n = 0; n < 10; n++)
//	{
//		scanf("%d", &m);
//		printf("%d", m);
//		if (max < m)
//		{
//			max = m;
//
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}


int main()
{
	int i = 0, n = 0, a = 0, b = 0, next = 0;
	a = b = 1;
	printf("%10d%10d", a, b);
	n = 2;
	for (i = 3; i <= 30; i++)
	{
		next = a + b;
		printf("%10d", next);
		n++;
		if (n % 6 == 0)
		{
			printf("\n");
		}
		a = b;
		b = next;
	}
	printf("\n");
	return 0;
}