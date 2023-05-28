#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a*b == 1000) {
		printf("tich 2 so bang 1000");
	}
	else if (a*b > 1000) {
		printf("tich 2 so lon hon 1000");
	} else printf("tich nho hon 1000");
	

	return 0;
}

