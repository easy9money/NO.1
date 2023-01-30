#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "Lets Go Warriors!!!!";
//	char arr2[] = "                    ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//
//}

//
//#include<string.h>
//int main()
//{
//	int i = 0;
//
//
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if(password == "350783")这是错误的，俩个字符串比较，不能使用==，应该用strcmp
//		if (strcmp(password, "350783") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，已锁定\n");
//
//	}
//	return 0;
//}



//It's a number guessing game
#include<stdlib.h>
#include<time.h>



void menu()
{
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* * * * * * * *       1.play                * * * * * * * *\n");
	printf("* * * * * * * *       0.exit                * * * * * * * *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
}
void game()
{
	//1.Produce a random number
	//The rand function returns a number between 0 - 32767
	//timestamp

	int ret = rand() % 100 + 1;//The remainder of %100 is 0-99, then +1, and the range is 1-100
	/*printf("%d\n", ret);*/

	//2.Guess the numbers

	int guess = 0;
	while (1)
	{
		printf("Please guess the number:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("The numbers are too small\n");

		}
		else if (guess > ret)
		{
			printf("The numbers are too big\n");

		}
		else
		{
			printf("Nice,you got it!\n");
			break;
		}
	}

}


int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));


	do
	{
		menu();
		printf("Your turn：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("It's over.\n");
			break;
		default:
		printf("Select Wrong, select again\n");
		break;
		}

	} while (input);

		return 0;

}



