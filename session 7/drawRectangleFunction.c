#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

void printOutRectangle(int length, int width) {
	int i, j;
	for( i = 0; i < length; i++) {
		for( j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void drawIsoscelesTriangle(int length) {
	int spaceInit = length, starInit = 1, i, j;
	for( i = 0; i < length; i++) {
		for( j = 0; j < spaceInit - 1; j++) {
			printf(" ");
		}
		for( j = 0 ; j < starInit; j++) {
			printf("*");
		}
		printf("\n");
		spaceInit--;
		starInit+=2;
	}
}

void drawHollowIsoscelesTriangleReversed(int length) {
	int i, j, starInit = 2*length - 1;
	
	for( i = 0 ; i < length ; i ++) {
		for (j = 0; j < i ; j++) printf(" ");
		for(j = 0 ; j < starInit; j ++) {
			if(i == 0 || i == length - 1 || j == 0 || j == starInit - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
		starInit-=2;
	}
	
}

void drawRightHalfTriangle(int length, int width) {
	int i,j;
	for (i = 0; i < length; i++) {
		for (j = i+1; j < width; j++) {
			printf(" ");
		}
		for ( j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void drawLeftHalfTriangle(int length, int width) {
	int i,j;
	for (i = 0; i < length; i++) {
		for (j = i; j < width; j++) {
			printf("*");
		}
//		for ( j = 0; j < i; j++) {
//			printf(" ");
//		}
		printf("\n");
	}
}

void drawXSign(int length) {
	int i,j;
	for (i = 0; i < length; i++) {
		for (j = 0; j < length; j++) {
			if ( i == j || i + j == length - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
int main() {
	int length, width;
	printf("Enter length and with: ");
	scanf("%d %d", &length, &width);
	printOutRectangle(length, width);
	
	printf("\n");
	
	int triangleLength;
	printf("Enter triangle length : ");
	scanf("%d", &triangleLength);
	drawIsoscelesTriangle(triangleLength);
	
	printf("\n");
	drawRightHalfTriangle(5, 5);
	printf("\n");
	drawLeftHalfTriangle(5, 5);
	printf("\n");
	drawHollowIsoscelesTriangleReversed(5);
	printf("\n");
	drawXSign(7);
	return 0;
}

