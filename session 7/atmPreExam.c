#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

void displayMenu() {
	
	printf("---------Menu---------\n\n");
	printf("a. Kiem tra so du\n");
	printf("b. Rut tien\n");
	printf("c. Gui tien\n");
	printf("d. Thoat\n\n");
}

void displayRemainAmount(int soDu) {
	printf("\nSo du cua ban la %d\n", soDu);
}

int drawMoney(int soDu) {
	int tienRut;
	do {
		printf("Nhap so tien ban muon rut: ");
		scanf("%d", &tienRut);
		if(tienRut > soDu) printf("So du khong du\nSo du hien tai cua ban la: %d\n", soDu);
	}while (tienRut > soDu);
	
	soDu -= tienRut;
	printf("Rut tien thanh cong\nSo du con lai la %d\n", soDu);
	return soDu;
}

int depositMoney(int soDu) {
	int tienGui;
	printf("Nhap so tien ban muon gui: ");
	scanf("%d", &tienGui);
	soDu += tienGui;
	printf("Gui tien thanh cong\nSo du hien tai la %d\n", soDu);	
	return soDu;
}

void showExitMessage() {
	printf("Tam biet va gen gap lai !\n");
}

void showInvalidOptiotion() {
	printf("Lua chon khong hop le!\nVui long nhap lai.\n");
}
int main() {
	int soDu = 5000000;
	char option;
	
	
	do {
		displayMenu();
		
		printf("Nhap lua chon cua ban (a, b, c, d) : ");
		fflush(stdin);
		scanf("%c", &option);

		switch(option) {
			case 'a': {
				displayRemainAmount(soDu);
				break;
			}
			case 'b': {
				soDu = drawMoney(soDu);
				break;
			}
			case 'c': {
				soDu = depositMoney(soDu);
				break;
			}
			case 'd': {
				showExitMessage();
				break;
			}
			default: 
				showInvalidOptiotion();			
		}
		printf("\n\n");
	}
	while(option != 'd');

	return 0;
}

