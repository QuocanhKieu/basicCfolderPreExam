#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	int arr[5];
	int i, max, min, total = 0;
	float avg;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		total += arr[i];
		if (i == 0) {
			min = arr[0];
			max = arr[0];
			
		}
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}
	
	printf("max  = %d\n", max);
	printf("min  = %d\n", min);
	printf("total  = %d\n", total);
	printf("avg = %.2f\n", total / (5*1.0));
	return 0;
}

