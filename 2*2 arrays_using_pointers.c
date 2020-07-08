#include<stdio.h>
int main()
{
	int arr[5][5];
	int i,j,n;
	printf("enter size of the array\n");
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",(*(arr+i)+j));
			
		}
	}
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < n;j++)
		{
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}
