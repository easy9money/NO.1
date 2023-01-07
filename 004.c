#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int Add(int x,int y)
{
	int z = 0;
	z = x + y;
	return z;


}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	//int sum=num1+num2;
	//函数的解决方式
	int sum = Add(num1, num2);


	printf("%d\n", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	char c1, c2;
	printf("请输入俩个字符 c1,c2:");
	c1 = getchar();
	c2 = getchar();
	//上面俩句话也可写成scanf("%d%d",&c1,&c2);
	printf("用putchar语句输出结果为:");
	putchar(c1);
	putchar(c2);
	//上面俩句等价于printf("%c%c",c1,c2);
	putchar('\n');
	//连着三条putchar语句等于printf("%c%c\n",c1,c2);
	printf("用printf语句输出结果为：\n");
	printf("%c%c", c1, c2);
	return 0;
}


#include<stdio.h>
int main()
{
	char x = '\0', y = '\0', z = '\0';
	printf("Enter x,y:");
	scanf("%c%c", &x, &y);
	printf("Before:x=%c,y=%c\n", x, y);
	z = x;
	x = y;
	y = z;
	printf("After:x=%c,y=%c", x, y);
	return 0;

}
