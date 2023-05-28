#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {

	int height;
	printf("Nhap chieu cao hinh tam giac : ");
	scanf("%d", &height);
	
	int i, whiteInit = height - 1, asteriskInit = 1;
	int j;
	for ( i=0; i < height ; i++ ) {
		for ( j = 0 ; j < whiteInit; j++) {
			printf(" ");
		}
		for ( j = 0; j < asteriskInit; j++) {
			printf("*");
		}
		printf("\n");
		whiteInit--;
		asteriskInit+=2;		
	}
	return 0;
}

