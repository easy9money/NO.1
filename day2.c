#include<stdio.h>
int main()
{
	printf("\a\a\a");
	return 0;
}



#include<stdio.h>
int main()
{
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c\n"));
	return 0;

}


#include<stdio.h>
int main()
{
	printf("c:\\test\\328\\test.c\n");
	return 0;

}


Now it is practice time(copy from the book)
#include<stdio.h>
int main()
{
	printf("+---+---+\n");
	printf("|   |   |\n");
	printf("+---+---+\n");
	return 0;

}



#include<stdio.h>
int main()
{
	printf("|^^^^^^^^^^^^^^^^|\n");
	printf("| MY NAME IS 22H |\n");
	printf("|________________|\n");
	printf("\n");


	printf("      I      \n");
	printf("Love    Taylor Swift\n");

	return 0;
}




#include<stdio.h>
#include<stdio.h>
int main()
{
	printf("%lf\n", 5 * sin(60 * 3.14159 / 180) + 12.5 * 3.4 + sqrt(16.88));
	return 0;
}

#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter n1 & n2:\n");
	scanf_s("%d %d", &n1, &n2);
	printf("%d + %d=%d\n",n1,n2,n1+n2);
	printf("%d - %d=%d\n",n1,n2,n1-n2);
	printf("%d * %d=%d\n",n1,n2,n1*n2);
	printf("%d/%d=%d\n",n1,n2,n1/n2);
	printf("%d%%%d=%d\n",n1,n2,n1%n2);
	printf("(%d+%d)/2=%d\n",n1,n2,(n1+n2)/2);
	return 0;

}