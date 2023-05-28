#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	int arr[10];
	int high, total, i;
	
	for( i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	
	high = arr[0];
	
	for(i = 0; i < 10; i++) {
		if(arr[i] > high) {
			high = arr[i];
		}
		
	}
	printf("The highest element is %d", high);
	return 0;
}

