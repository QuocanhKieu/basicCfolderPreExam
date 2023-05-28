#include<stdio.h>
#include<math.h>
#include<conio.h>

int main() {
	int aNum;
	
	scanf("%d", &aNum);
	if(!(aNum%2) && aNum != 0) {
		printf("So chan");
	} else if(aNum == 0) printf("bang 0");
	else printf("so le");
	
	return 0;
}

