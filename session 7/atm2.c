#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	int flag=1, pin, option, sodu = 1000000,rut_tien,nap_tien;
	
	printf("Nhap ma pin vao: ");
	scanf("%d",&pin);
	if(pin == 123456){
		printf("Ma pin dung, dang nhap thanh cong\n\n");
		do{
			printf("------------------------------------\n");
			printf("Chao mung ban den voi ngan hang ACB\n");
			printf("------------------------------------\n");
			printf("1. Xem so du tai khoan\n");
			printf("2. Rut tien\n");
			printf("3. Nap tien vao tai khoan \n");
			printf("4. Thoat\n");
			printf("Vui long dua ra lua chon cua ban: ");
			scanf("%d",&option);
			switch(option){
				case 1:{
					printf("So du tai khoan cua ban la: %d\n",sodu);
					break;
				}
				case 2:{
					printf("Nhap so tien ban muon rut: ");
					scanf("%d",&rut_tien);
					if(rut_tien>sodu){
						printf("Tai khoan cua ban khong du de thuc hien giao dich");
					} else {
						sodu -= rut_tien;
						printf("Ban da rut tien thanh cong, so du tai khoan cua ban hien tai la: %d\n\n",sodu);
					}
					break;
				}
				case 3:{
					printf("Nhap so tien ban muon nap: ");
					scanf("%d",&nap_tien);
					sodu += nap_tien;
					printf("Nap tien thanh cong. So du tai khoan cua ban hien tai la: %d\n\n",sodu);
					break;
				}
				case 4:{
					flag = 0;
					printf("Hen gap lai.");
					break;
				}
				default:{
					printf("Nhap sai, vui long nhap lai\n");
					break;
				}
			}
			
		} while(flag);
			
	} else {
			printf("Ma pin sai");
	}
	 

	exit(0);
	return 0;
}

