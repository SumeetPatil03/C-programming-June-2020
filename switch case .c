#include <stdio.h>
main()
{
	printf("pick an item: \nl. Burger Rs129\n2. Pasta Rs179\n3. Sandwich Rs149\n4. Pizza Rs239\n5. French Fries Rs99 ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice) 
	{
		case 1:
			printf("You have selected\nFood item-Burger Price-Rs129");
			break;
		case 2:
			printf("You have selected\nFood item-Pasta Price-Rs179");
			break;
		case 3:
			printf("You have selected\nFood item-Sandwich Price-Rs149");
			break;
		case 4:	
		    printf("You have selected\nFood item-Pizaa Price-Rs239");
			break;
		case 5:
			printf("You have selected\nFood item-French Fries Price-Rs99");
			break;
		default : printf("The number that you have choiced is not in the list.\n");
				  printf("Please input the valid number.");
				  		}
}
