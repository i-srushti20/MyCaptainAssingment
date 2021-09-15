#include<stdio.h>

int main()
{
	int choice;
	
	// Menu
	printf("--------------MENU---------------\n");
	printf("1. Pizza, Rs. 239 \n");
	printf("2. Burger, Rs. 129 \n");
	printf("3. Pasta, Rs. 179 \n");
	printf("4. French Fries, Rs. 99 \n");
	printf("5. Sandwich, Rs. 149 \n");
	printf("---------------------------------\n");
	
	// Take the choice as an input from user
	printf("\n Enter Your Choice : ");
	scanf("%d", &choice);
	
	// switch-case conditional block
	switch(choice)
	{
		case 1 :
			printf("Food Name : Pizza\nPrice : Rs. 239");
			break;
		case 2 :
			printf("Food Name : Burger\nPrice : Rs. 129");
			break;
		case 3 :
			printf("Food Name : Pasta\nPrice : Rs. 179");
			break;
		case 4:
			printf("Food Name : French Fries\nPrice : Rs. 99");
			break;
		case 5 :
			printf("Food Name : Sandwich\nPrice : Rs. 149");
			break;
		default :
			printf("Wrong Input (Please Choose Between 1-5)");
	}
	
	return 0;
}

