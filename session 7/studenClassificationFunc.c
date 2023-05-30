#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>


char categoriseStudent(int score) {
	
	if (score >= 90 ) return 'A';
	else if (score >= 80 && score < 90) return 'B';
	else if (score >= 70 && score < 80) return 'C';
	else if (score >=60 && score < 70) return 'D';
	else return 'F';
}

int main() {
	int score;
	
	printf("Nhap vao diem sinh vien: ");
	scanf("%d", &score);
	
	printf("Sinh vien duoc xep loai: %c", categoriseStudent(score) );


	return 0;
}

