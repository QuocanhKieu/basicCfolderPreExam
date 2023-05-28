#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	const int pin = 123456;
	const char account[] = "KIEUQUOCANH";
	float soDu = 1250000.5; 
	
	int flagExit = 0;
	
	char inputAccount[20]; 
	int inputPin;
	
	do {
	printf("Moi ban dang nhap!\n");
	printf("Nhap ten dang nhap : \n");
	scanf("%s", inputAccount);
	printf("Nhap ma pin : \n");
	scanf("%d", &inputPin);
//	printf("%s, %d", inputAccount, inputPin);
	if (pin != inputPin) {
		printf("Sai ma pin\n");
		break;
	}
	if (!strcmp(account, inputAccount)) {
	printf("Sai ma \n");
	break;
	}	
	}while (!flagExit);
		
	
	

	return 0;
}

