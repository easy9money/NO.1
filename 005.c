#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int  main()
{
	int a = 10;
	int b = a++;
	int c = a;
	printf("%d\n", b);
	printf("%d", c);
	return 0;
}

{
	int a = 30;
	int b = 11;
	int max;
	//max = a > b ? a : b;//�����������ʶ��

	if (a > b)//����������ֱ�����������ʡ�Ժܶ�
	{
		max = a;
	}
	else
	{
		max = b;

	}
	printf("%d", max);
	return 0;
}



{
	int a = 3;
	int b = 4;
	int c = 9;
	        //a=13      c=9        b=9+13=22
	int d = (a = b + c, c = a - b, b = c + a);
	//���ű��ʽ�Ǵ����������μ����
	//�������ʽ�Ľ������������һ�����ʽ�Ľ��Ϊ׼
	printf("%d\n", d);
	return 0;
}


//�±����ò�����---[]
{
	int arr[4] = { 1,2,3,4 };
	printf("%d", arr[3]);
	return 0;
}


//�������ò�����
{
	//���ú�����ʱ�򣬺�������ģ������ǵ��ú���������
	printf("%d", 100);
	return 0;
}

{

	//����Ƶ��ʹ�õ����ݴ���ڼĴ����У����Ч��
	register int num = 30;//����num��ֵ����ڼĴ�����
	return 0;

}


typedef unsigned int u_int;
//typedef ���Ͷ���
{
	unsigned int num = 100;
	u_int num2 = 100;
	return 0;
}


void test()
{
	int a = 1;
	a++;
	printf("%d", a);

}
int main()

{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;

	}
	

		return 0;
}


void test()
{
	static int a = 1;//����static��ֲ��������������ڸı���
	a++;
	printf("%d", a);

}
int main()

{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;

	}


	return 0;
}

//1.define���峣��
#define MAX 1000
int main()

{
	printf("%d", MAX);
	return 0;
}



//2.define�����

#define Add(x, y)(x + y)//Ҳ���Ըĳ�((x)+(y))
int main()
{
	printf("%d\n",2* Add(30, 11));

    return 0;


}