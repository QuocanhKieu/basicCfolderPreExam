#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	float expenses[] = {1200.5, 800.25, 950.75, 1100, 750.5, 900.11995, 1300.339966};
	float total = 0, highest = expenses[0], budget;
	
	printf("Enter your budget: ");
	scanf("%f", &budget);
	
	int i;
	for( i = 0; i < 7; i++) {
		printf("Day %d: %f\n", i+2, expenses[i]);
		total += expenses[i];
		if( expenses[i] > highest) highest = expenses[i];
	
	}
	
	printf("\n------Summary-------\n");
	printf("Total monthly expenses: $%.2f\n", total);
	if(total > budget)
	printf("Expenses exceed your budget\n");
	else
	printf("Expenses within the budget\n");
	printf("Highest expense: $%.2f",highest);
	
	
	
	return 0;
}

