<<<<<<< HEAD
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
	int a, b, selection;
	printf("Nhap vao 2 canh hcn: a , b : ");
	scanf("%d %d", &a, &b );
	
	
	do {
		printf("1, Nhap vao 1 de tinh chu vi\n");
		printf("2, Nhap vao 2 de tinh dien tich\n");
		printf("3, Nhap 3 de thoat \n\n");
		
		printf("Lua chon cua ban la: ");
		scanf("%d", &selection);
		
		switch(selection) {	
			case 1: 
				printf("Chu vi hcn = %d\n", chuViHcn(a, b) );
				break;
			case 2: 
				printf("Dien tich hcn = %d", dienTichHcn(a, b) );
				break;
			case 3:
				printf("Hen gap lai !\n");
				break;
			default:
				printf("Lua chon khong dung, vui long nhap lai\n");
		}
		printf("\n\n");
	} while(selection != 3);
	

	return 0;
}

=======
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
	int a, b, selection;
	printf("Nhap vao 2 canh hcn: a , b : ");
	scanf("%d %d", &a, &b );
	
	
	do {
		printf("1, Nhap vao 1 de tinh chu vi\n");
		printf("2, Nhap vao 2 de tinh dien tich\n");
		printf("3, Nhap 3 de thoat \n\n");
		
		printf("Lua chon cua ban la: ");
		scanf("%d", &selection);
		
		switch(selection) {	
			case 1: 
				printf("Chu vi hcn = %d\n", chuViHcn(a, b) );
				break;
			case 2: 
				printf("Dien tich hcn = %d", dienTichHcn(a, b) );
				break;
			case 3:
				printf("Hen gap lai !\n");
				break;
			default:
				printf("Lua chon khong dung, vui long nhap lai\n");
		}
		printf("\n\n");
	} while(selection != 3);
	

	return 0;
}

>>>>>>> 590fd07ae367d3a868e2184fe036f1c5f3d4a441
