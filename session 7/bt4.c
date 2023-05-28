#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	char g;
	float s;
	printf("nhap Grade va Salary cua 1 nhan vien");
	scanf("%c %f", &g, &s);
	
	switch (g) {
		case 'A': {
			printf("luong cuoi thang = %.3f", s + 300);
			break;
		}
		case 'B': {
			printf("luong cuoi thang = %.3f", s + 250);
			break;
		}
		default: {
			printf("luong cuoi thang = %.3f", s + 100);
		}
		
	}
	
	return 0;
}

