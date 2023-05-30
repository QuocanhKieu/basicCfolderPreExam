#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int chuViHcn(int a, int b);
int dienTichHcn(int a, int b);

int chuViHcn(int a, int b) {
	return 2 * (a + b);
}

int dienTichHcn(int a, int b) {
	return a * b;
}


int main() {
	int a, b;
	printf("Nhap vao 2 canh hcn: a , b : ");
	scanf("%d %d", &a, &b );
	
	printf("Chu vi hcn = %d\n", chuViHcn(a, b) );
	printf("Dien tich hcn = %d", dienTichHcn(a, b) );


	return 0;
}

