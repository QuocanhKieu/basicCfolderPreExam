#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

void main() {
	int i;
	for ( i = 2; i <= 9; i++) {
		printf("Bang cuu chuong cho so %d\n\n", i);
		int j;
		for(j = 1; j <= 10; j++) {
			printf(" %d x %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}

