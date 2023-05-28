#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	char ch[26];
	int i,j;
	printf("ch array length is %d\n", strlen(ch));
	for(i = 65, j = 0; i < 91; i++, j++) {
		ch[j] = i;
		printf("The character at index %d is %c\n", j, ch[j]);
	}
	
	printf("ch array length is %d\n", strlen(ch));
	return 0;
}

