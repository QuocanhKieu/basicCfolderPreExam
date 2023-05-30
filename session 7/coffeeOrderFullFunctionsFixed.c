#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

void showMenu() {
	printf("*********** Coffee Shop Menu ***********\n");
	printf("a. Espresso - $2.50\n");
	printf("b. Cappuccino - $3.00\n");
	printf("c. Latte - $3.50\n");
	printf("d. Quit");
}

void showOption (char option) {
	switch(option) {
		case 'a': {
			printf("Placing order: Espresso\n");
			break;
		}
		case 'b': {
			printf("Placing order: Cappuccino\n");
			break;
		}
		case 'c': {
			printf("Placing order: Latte\n");
			break;
		}
	}
}

float calCost (char option, int quantity) {
	switch(option) {
		case 'a': {
			printf("Total cost : %.2f\n\n", quantity*2.50);
			break;
		}
		case 'b': {
			printf("Total cost : %.2f\n\n", quantity*3.0);
			break;
		}
		case 'c': {
			printf("Total cost : %.2f\n\n", quantity*3.50);
			break;
		}
	}
}


char chooseOptionPlaceOrder () {

	char option;
	printf("\nEnter your option: ");
	do {
		fflush(stdin);
		scanf("%c", &option);
		if (option > 'd' || option < 'a') printf("Invalid option, Please pick again !\n");
	} while (option > 'd' || option < 'a');
	
	return option; 
}


int main() {
	char option;
	int quantity = 0;
	
	do {
		showMenu();
		option = chooseOptionPlaceOrder();
		showOption(option);
		
		if (option != 'd') {
			printf("Enter the quantity: ");
			do {
				scanf("%d", &quantity);
				if (quantity < 0) printf("Quantity should not be 0\nEnter the quantity: \n");	
			}while(quantity < 0);
			
			calCost(option, quantity);
		}
		
	}while (option != 'd');
	
	return 0;
}

