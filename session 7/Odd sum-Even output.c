#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	int n1, n2, sum=0;
	printf("Nhap vao 2 so n1 < n2\n");
	scanf("%d %d", &n1, &n2);
	

	int i;
	for(i = n1 ; i <=n2; i++) {
		if(i%2==0) printf("%d\n",i);
		else sum += i;//sum = sum + i;
		
		printf("Sum so le = %d\n", sum);
	}
	
	return 0;
}

