#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Max 100

void bubblesort(int dizi[], int elemansayisi) {
	int i, j;
	int temp;
	for (i = 0; i < elemansayisi; i++) {
		for (j = 1; j < elemansayisi - i; j++) {
			
			if (dizi[j-1] > dizi[j]) {

				temp = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = temp;
			}
		}
	}
}

int main() {
	int dizi[Max];
	int elemansayisi;
	int i;

	printf("Dizi kac elemanli? ");
	scanf("%d", &elemansayisi);
	for (i = 0; i < elemansayisi; i++) {
		printf("Siralamak istediginiz diziyi giriniz: ");
		scanf("%d", &dizi[i]);
	}
	bubblesort(dizi, elemansayisi);

	for (i = 0; i < elemansayisi; i++) {

		printf("%d\t" , dizi[i]);
	}
	

	return 0;

}