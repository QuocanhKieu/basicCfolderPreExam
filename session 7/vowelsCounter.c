#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char strLine[20];
	printf("Enter a string line to count vowels: ");
	scanf("%s", strLine);
	int i,num = 0, uNum, eNum, oNum, aNum, iNum;
	uNum = eNum = oNum = aNum = iNum = 0;
	for (i = 0; i < strlen(strLine); i++) {
		
		switch(tolower(strLine[i])) {
			case 'u' : {
				uNum++;
				num++;
				break;
			}
			case 'e' : {
				eNum++;
				num++;
				break;
			}
			case 'o' : {
				oNum++;
				num++;
				break;
			}
			case 'a' : {
				aNum++;
				num++;
				break;
			}
			case 'i' : {
				iNum++;
				num++;
				break;
			}	
		}
	}
	printf("\nVowels characters found : %d\n\n", num);
	printf("u : %d character(s)\n", uNum);
	printf("e : %d character(s)\n", eNum);
	printf("o : %d character(s)\n", oNum);
	printf("a : %d character(s)\n", aNum);
	printf("i : %d character(s)\n", iNum);
	return 0;
}

