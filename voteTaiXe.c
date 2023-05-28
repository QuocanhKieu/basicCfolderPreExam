#include<stdio.h>
#include<conio.h>
#include <math.h>
#include<stdlib.h>


int main() {
	
	int v1, v2, v3;
	scanf("%d %d %d", &v1, &v2, &v3);
	float rate = (float)((v1+v2+v3) / 3);
	printf("%f", rate);
	
	
	return 0;
}
