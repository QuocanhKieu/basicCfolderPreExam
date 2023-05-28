#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	int coffee = 0, tea = 0, smoothie = 0;
	
	int flag = 1;
	do {
		printf("--- Menu ---\n");
		printf("1. Coffee ($2.50)\n");
		printf("2. Tea ($2.00)\n");
		printf("3. Smoothie ($3.00)\n");
		printf("4. Quit\n");
		printf("Enter your choice (1-4) : ");
		int choice;
		scanf("%d", &choice);
		
		switch(choice) {
			case 1: coffee++;
				break;
			case 2: tea++;
				break;
			case 3: smoothie++;
				break;
			case 4: flag = 0;			
				break;
			default: printf("Lua chon khong co san, moi ban nhap lai nha!\n");
			
		}
		printf("\n");
	}while(flag);

	printf("---Order Detail---\n");
	printf("Coffee %d\n", coffee);
	printf("Tea %d\n", tea);
	printf("Smoothie %d\n", smoothie);
	printf("Total Cost $%.2f\n\n", coffee*2.5 + tea*2.0 + smoothie*3.0);
	printf("Thanks for your purchases! Enjoy your drinks!");
	
	return 0;
}

