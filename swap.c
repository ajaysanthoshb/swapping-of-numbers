#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	a = a*b;
	b = a/b; /* we want b = a , so we can also written as b = a*b/b assign a*b value to a, therefore b = a/b */
	a = a/b; /* now we want a = b,since now a = a*b we must divide the value with a to get a = b since we know that b = a , therefore divide with b */
	printf("a = %d   b = %d",a,b);
	return 0;
}
