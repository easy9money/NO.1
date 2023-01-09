#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	int id;
//
//};
//
//int main()
//{
//	struct Stu s = { "ZZh",18,113};
//	printf("1: %s %d %d\n", s.name, s.age,s.id);
//	
//	struct Stu * ps = &s;
//	printf("2: %s %d %d\n", (*ps).name, (*ps).age, (*ps).id);
//
//	printf("3: %s %d %d\n", ps->name, ps->age, ps->id);
//	
//	
//	return 0;
//}

//指针其实就是地址，找到那个地址把它替换掉。
int main()
{
	int H = 13;

	int* p = &H;
	*p = 30;
	printf("%d", H);
	return 0;
}
