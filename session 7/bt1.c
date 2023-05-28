#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (b == 0) {
		printf("b bang 0");
	}
	else if (!(a%b)) {
		printf("a chia het cho b");
	} else printf("a ko chia het cho b");
	

	return 0;
}

