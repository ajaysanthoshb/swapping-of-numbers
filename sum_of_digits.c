#include<stdio.h>
int sum_of_digits(int a,int b);

int main()
{
	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	int sum = 0;
	printf("sum of digits = %d\n",sum_of_digits(number,sum));
	return 0;
}

int sum_of_digits(int n,int sum)
{
	int k;
	if(n == 0)
	{
		return sum;
	}
	else
	{
		k = n%10;
	  sum = sum + k;
	}
	return sum_of_digits(n/10,sum);
}
