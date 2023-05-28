#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {

	int mark[5], max, min, i, sum = 0, iMin;
	int passedStu[5];
	int 
	
	printf("Enter a list of successive marks from student\n");
	for(i = 0; i < 5; i++) {
		scanf("%d", &mark[i]);
		if ( i == 0 ) {
			max = min = mark[0];
			iMin = 0;
		}

		if ( max < mark[i] ) max = mark[i];
		if ( min > mark[i] ) { min = mark[i]; iMin = i;};
		sum += mark[i];  
	}
	
	printf("\nHighest mark = %d\n", max);
	printf("avg mark = %.2f\n\n", 1.0*sum/i);// i or 10
	
	for ( i = 0; i < 5; i++) {
		if(mark[i] > 40) printf("Student %d passes\n", i);
		else printf("Student %d fails\n", i);
	}
	
	printf("Student with the lowest mark is at index of %d", iMin);

	return 0;
}

