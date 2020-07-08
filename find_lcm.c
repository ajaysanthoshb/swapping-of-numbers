#include<stdio.h>

int find_lcm(int,int,int);
int main()
{
	int a,b;
	printf("enter two numbers to find LCM of them\n");
	scanf("%d%d",&a,&b);
	printf(" LCM of %d and %d is %d\n",a,b,find_lcm(a,b,1));
	return 0;
}

int find_lcm(int a,int b,int c)
{
	if(c % a == 0 && c % b == 0)
	{
		return c;
	}
	else
	{
		return find_lcm(a,b,c+1);
	}
}
