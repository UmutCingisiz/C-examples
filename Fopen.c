#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main() {
	FILE* filep;
	char text[30];

	filep = fopen("deneme.txt", "a");

	if (filep == NULL) {
		printf("Boyle bir dosya yok...");
	}
	else {
		printf("Dosya olusturuldu.\n");
		printf("Lutfen dosyaniza bir seyler yazin:");
		fgets(text, 30, stdin);
		fputs(text, filep);
		printf("Dosyaniza basariyla yazdirildi...");
	}
	return 0;

}