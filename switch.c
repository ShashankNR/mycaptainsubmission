#include<stdio.h>
int main()
{
        // 1. Display their menu
	printf("Hello Byte! Enter a random number from 1 to 5: \n");
	// 2. Read their choice
	int choice=0;
	scanf("%d", &choice);
	// 3. Display based one thier choice
	switch(choice)
	{
	    case 1:
		printf("Food item - French Fries\nPrice - Rs 99");
		break;
	    case 2:
		printf("Food item - Sandwich\nPrice - Rs 149");
		break;
	    case 3:
	    	printf("Food item - Pasta\nPrice - Rs 179");
	    	break;
	    case 4:
	    	printf("Food item - Burger\nPrice - Rs 129");
	    	break;
	    case 5:
	    	printf("Food item - Pizza\nPrice - Rs 239");
		break;
	    default:
		printf("Sorry Byte you didn't choose anything between 1 to 5");	    	
	}
	return 0;
}
