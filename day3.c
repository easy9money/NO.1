#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, d1, d2, d3;
	printf("������һ����λ������ n:");
	scanf("%d", &n);
	d1 = n % 10;
	d2 = (n / 10) % 10;
	d3 = n / 100;
	printf("����λ������n������Ϊ��%d%d%d", d1, d2, d3);
	return 0;
}



#include<stdio.h>
int main()
{
	int n, d1, d2, d3, d4;
	printf("������һ����λ������ n:");
	scanf("%d", &n);
	d1 = n % 10;
	d2 = (n / 10) % 10;
	d3 = (n / 100) % 10;
	d4 = n / 1000;
	printf("�����ĸ�λ��%d,ʮλ��%d,��λ��%d,ǧλ��%d\n", d1, d2, d3, d4);
	return 0;
}



#include<stdio.h>
int main()
{
	int num, hour, minute;
	printf("Enter num:");
	scanf("%d",& num);
	hour = num / 60;
	minute = num % 60;
	printf("%d num=%d hour and %d minute \n",num,hour,minute);
		return 0;


}


#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	double r, h, V;
	printf("���������뾶r,��Ϊh:\n");
	scanf("%lf%lf", &r, &h);
	V = PI * pow(r, 2) * h;
	printf("Բ�������Ϊ: % .2lf\n", V);
	return 0;

}


#include<stdio.h>
 int main()
{
	int n, d1, d2, d3, d4, d5;
	printf("������һ����λ������n:");
	scanf("%d",&n);
	d1 = n % 10;
	d2 = (n / 10) % 10;
	d3 = (n / 100) % 10;
	d4 = (n / 1000) % 10;
	d5 = (n / 100000);
	printf("%d---%d---%d---%d---%d\n", d5, d4, d3, d2, d1);
	return 0;

}//��֪��Ϊɶ������������һλ����0