#include<stdio.h>
int main()
{
	int number;
	printf("choose a random number from 1 to 5\n");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("Food item - Pizza\nPrice - Rs 239\n");
			break;
		case 2:
			printf("Food item - Burger\nPrice - Rs 129\n");
			break;
		case 3:
			printf("Food item - Pasta\nPrice - Rs 179\n");
			break;
		case 4:
			printf("Food item - French Fries\nPrice - Rs 99\n");
			break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs 149\n");
			break;
		default:
			printf("please choose the number from 1 to 5\n");
	}
  return 0;
}
