#include<stdio.h>

int check_prime(int a,int b);

int main()
{
  int number,m;
  while(1)
  {
  	printf("enter number\n");
	  scanf("%d",&number);
	  if(number > 1)
	  {
		  if(check_prime(number,2))
	    {
		    printf("%d is a prime number\n",number);
	    }
	    else
	    {
		    printf("%d is not a prime number\n",number);
	    }
	   }
	   else
	   {
		   printf("%d is not a prime number\n",number);
	   }
	   printf("\n");
	   printf("enter 1 to continue the loop and enter 0 to end the program\n");
	   scanf("%d",&m);
	   if(!m)
	   {
		   break;
	   }
	   printf("\n\n");
  }
	return 0;
}

int check_prime(int n,int a)
{
	if(n == 2)
	{
		return 1; /* 1 indicates true*/
	}
	if(a+1 == n)
	{
		return 1;
	}
	if(n % a == 0)
	{
		return 0; /* 0 indicates false*/
	}
	return check_prime(n,a+1);
}
