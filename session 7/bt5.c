#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int score;
	do {
		printf("nhap score cua 1 nhan vien (>0, <100) : ");
		scanf("%d", &score);
	} while (score < 0|| score> 100);
		
	score >= 75 ? printf("loai A") 
	: score >= 60 ? printf("Loai B") 
	: score >= 45 ? printf("Loai C") 
	: score >= 35 ? printf("Loai D") 
	: printf("Loai E");
	
	return 0;
}

