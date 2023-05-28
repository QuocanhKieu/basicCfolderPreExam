#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	
	const int h, w;
	printf("Nhap Chieu Cao Va Chieu Rong Cua Hinh Chu Nhat : ");
	scanf("%d %d", &h, &w);
	
	printf("Ho bien ta duoc hinh chu nhat sau: \n");
	
	int i;
	for ( i = 0; i < h ; i++) {
		int j;
		for( j = 0 ; j < w; j++) {
			if ( i == 0 && i < h - 1 && j > 0 && j < w - 1) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}

