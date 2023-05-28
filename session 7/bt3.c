#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int hieu = a - b;
	if ( a * b < 0 ) printf("hieu khong bang either of the 2 input numbers");
	else if( (a == b && a == 0)) printf("hieu bang either of the both numbers");
	else if (hieu == a) {
		printf("hieu bang a");
	}
	else if (hieu == b) {
		printf("hieu bang b");
	}
	else {
		printf("hieu khong bang either of the 2 input numbers");
	} 
	

	return 0;
}

