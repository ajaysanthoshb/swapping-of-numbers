#include<stdio.h>
int main()
{
	printf("enter no. of steps for stairs\n");
	int n;
	scanf("%d",&n);
	int i,j;
	printf("\n");
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <=i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
  return 0;
}
