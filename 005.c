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
	//max = a > b ? a : b;//这个是条件标识符

	if (a > b)//上面这个会比直接用条件语句省略很多
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
	//逗号表达式是从左向右依次计算的
	//整个表达式的结果以最后以最后一个表达式的结果为准
	printf("%d\n", d);
	return 0;
}


//下标引用操作符---[]
{
	int arr[4] = { 1,2,3,4 };
	printf("%d", arr[3]);
	return 0;
}


//函数调用操作符
{
	//调用函数的时候，函数后面的（）就是调用函数操作符
	printf("%d", 100);
	return 0;
}

{

	//大量频繁使用的数据存放在寄存器中，提高效率
	register int num = 30;//建议num的值存放在寄存器中
	return 0;

}


typedef unsigned int u_int;
//typedef 类型定义
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
	static int a = 1;//加上static后局部变量的生命周期改变了
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

//1.define定义常量
#define MAX 1000
int main()

{
	printf("%d", MAX);
	return 0;
}



//2.define定义宏

#define Add(x, y)(x + y)//也可以改成((x)+(y))
int main()
{
	printf("%d\n",2* Add(30, 11));

    return 0;


}