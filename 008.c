#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
//{
//	int day;
//	printf("What day is it today:\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("It's Monday.");
//		break;
//	case 2:
//		printf("It's Tuesday.");
//		break;
//	case 3:
//		printf("It's Wednesday.");
//		break;
//	case 4:
//		printf("It's Thursday.");
//		break;
//	case 5:
//		printf("It's Friday.");
//		break;
//	case 6:
//		printf("It's Saturday.");
//		break;
//	case 7:
//		printf("It's Sunday.");
//		break;
//
//	}
//	return 0;
//}

{
	int m, n;

	printf("Enter m & n :\n");
	scanf("%d %d", &m, &n);

	switch (m)
	{
	case 1:
		m++;
		n++;
		break;
	case 2:
		n++;
		break;
		switch (n)
		{
		case 3:
			n++;
			break;
		case 4:
			m++;
			break;

		}


	}
	printf("m=%d,n=%d", m, n);

	return 0;
}
