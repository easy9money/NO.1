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
	//�����Ľ����ʽ
	int sum = Add(num1, num2);


	printf("%d\n", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	char c1, c2;
	printf("�����������ַ� c1,c2:");
	c1 = getchar();
	c2 = getchar();
	//�������仰Ҳ��д��scanf("%d%d",&c1,&c2);
	printf("��putchar���������Ϊ:");
	putchar(c1);
	putchar(c2);
	//��������ȼ���printf("%c%c",c1,c2);
	putchar('\n');
	//��������putchar������printf("%c%c\n",c1,c2);
	printf("��printf���������Ϊ��\n");
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