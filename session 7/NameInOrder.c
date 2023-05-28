	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<conio.h>
	#include <string.h>
	
	int main() {
		int i, j, count;
		char temp[20];
		char str[][20] = {"William", "Tim", "Roger", "Xavier", "Tina", "Albert", "George"};
		
		int length = sizeof(str)/ sizeof(str[0]);
		
		printf("The Name list is :\n\n");
		for(i = 0 ; i < length; i++) {
			printf("%s\n", str[i]);
		}
		
		printf("\n\n");
		do {
			count = 0;
			
			for( i = 0; i < length - 1; i++) {
				if(strcmp(str[i], str[i+1]) > 0) {// so sanh 2 string 
					strcpy(temp, str[i + 1]);
					strcpy(str[i + 1], str[i]);
					strcpy(str[i], temp); 
					count++;
				}
			}
			
		}while(count);
		
		printf("The Above Name list in Alphalbet Order:\n\n");
		for(i = 0 ; i < length; i++) {
			printf("%s\n", str[i]);
		}
	
		return 0;
	}

