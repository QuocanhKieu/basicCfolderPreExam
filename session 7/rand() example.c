#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
   
    srand(time(NULL));
    
	int randomNumToBeGuessed = rand() % 100 + 1;
	printf("Lucky number is %d\n", randomNumToBeGuessed);
	int userGuess;
	do {
		printf("Guess the number between 1 and 100 :   ");
		scanf("%d", &userGuess);
		int distance = abs(userGuess - randomNumToBeGuessed);
		
		if (distance == 0) {
			printf("Wow, you are so smart, you got the lucky star");
			break;
		}
		
		distance > 20 ? 
		printf("Too far from the lucky number\n")
		: distance > 10 ?
		printf("You are nearly there, keep guessing\n")
		: distance > 5?
		printf("You are pretty nearly there, keep guessing\n")
		: printf("You are so so so close, just a little bit !\n");
		
		printf("\n");
		
	} while (1);
   return 0;
}

