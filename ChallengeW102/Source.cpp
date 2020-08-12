#include<stdio.h>
int main()
{
	int num1,num2;
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("%d + %d = %d\n%d - %d = %d\n%d x %d = %d\n%d / %d = %d",num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,num1/num2 );
	return 0;
}