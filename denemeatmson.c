#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main() {
	int islem = 0;  
	int bakiye = 5000;
	int tutar;

	while (islem != 5) {  
		printf("\nYapabileceginiz Islemler:\n");
		printf("1. Para Yatirmak\n");
		printf("2. Para Cekmek\n");
		printf("3. Havale/Eft yapmak\n");
		printf("4. Bakiye Sorgulamak\n");
		printf("5. Kart Iade\n\n");

		printf("Lütfen yapacaginiz islemi seciniz: ");
		if (scanf("%d", &islem) != 1) {  
			printf("Hatali giris yaptiniz! Lutfen gecerli bir sayi girin.\n");
			while (getchar() != '\n');  
			continue;
		}

		switch (islem) {
		case 1:
			printf("Mevcut Bakiyeniz: %d\n", bakiye);
			printf("Yatirmak istediginiz tutarı giriniz: ");
			if (scanf("%d", &tutar) != 1 || tutar < 0) {
				printf("Hatali giris yaptiniz! Lutfen gecerli bir sayi girin.\n");
				while (getchar() != '\n');
				continue;
			}
			bakiye += tutar;
			printf("Guncel Bakiyeniz: %d\n", bakiye);
			break;

		case 2:
			printf("Mevcut Bakiyeniz: %d\n", bakiye);
			printf("Cekmek istediginiz tutarı giriniz: ");
			if (scanf("%d", &tutar) != 1 || tutar < 0) {
				printf("Hatali giris yaptiniz! Lutfen gecerli bir sayi girin.\n");
				while (getchar() != '\n');
				continue;
			}

			if (bakiye < tutar) {
				printf("Yetersiz bakiye! Para çekme işlemi gerçekleşmedi.\n");
			}
			else {
				bakiye -= tutar;
				printf("Guncel Bakiyeniz: %d\n", bakiye);
			}
			break;

		case 3:
			printf("Mevcut Bakiyeniz: %d\n", bakiye);
			printf("Havale/Eft yapmak istediginiz tutarı giriniz: ");
			if (scanf("%d", &tutar) != 1 || tutar < 0) {
				printf("Hatali giris yaptiniz! Lutfen gecerli bir sayi girin.\n");
				while (getchar() != '\n');
				continue;
			}

			if (bakiye < tutar) {
				printf("Yetersiz bakiye! Havale/EFT işlemi gerçekleşmedi.\n");
			}
			else {
				bakiye -= tutar;
				printf("Guncel Bakiyeniz: %d\n", bakiye);
			}
			break;

		case 4:
			printf("Mevcut Bakiyeniz: %d\n", bakiye);
			break;

		case 5:	
			break;  

		default:
			printf("Gecersiz Islem sectiniz! Lutfen 1-5 arasinda bir sayi giriniz.\n");
			break;
		}
	}

	printf("Sistemden cikis yapiliyor...\n");
	return 0;
}