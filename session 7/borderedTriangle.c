#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {

	int height;
	printf("Nhap chieu cao hinh tam giac : ");
	scanf("%d", &height);
	
	int i, j;
	for ( i=0; i < height ; i++ ) {
		for (j = 0; j <= i; j++ ) {
			if(i == 0 || i == height - 1|| j == 0 || j == i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}

	return 0;
}

