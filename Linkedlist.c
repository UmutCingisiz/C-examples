#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* q = NULL;

void BasaEkle(int basa) {
	struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data = basa;
	eklenecek->next = start;
	start = eklenecek;
}

void SonaEkle(int sona) {
	struct node* eklenecek = (struct node*)malloc(sizeof(struct node));
	eklenecek->data = sona;
	eklenecek->next = NULL;

	if (start == NULL){
		start = eklenecek;
	}
	else {
		q = start;
		while (q->next != NULL) {
			q = q->next;
		}
		q->next = eklenecek;
	}
}

void yazdir() {
	q = start;
	while (q != NULL) {
		printf("%d", q->data);
		if (q->next != NULL) {
			printf("=>");
		}
		q = q->next;
	}
}

int main() {
	int sayiilk, islem, sayison;
	while (1) {
		printf("\n1. Basa sayi ekleme");
		printf("\n2. Sona sayi ekleme");
		printf("\n3. Islemi bitir ve cik");
		printf("\nLutfen yapmak istediginiz islemi seciniz: ");
		scanf("%d", &islem);
		
		switch (islem) {
		case 1:
			printf("Basa eklemek istediginiz sayiyi giriniz: ");
			scanf("%d", &sayiilk);
			BasaEkle(sayiilk);
			yazdir();
			break;

		case 2:
			printf("Sona eklemek istediginiz sayiyi giriniz: ");
			scanf("%d", &sayison);
			SonaEkle(sayison);
			yazdir();
			break;

		case 3:
			printf("Programdan cikiliyor...\n");
			return 0;

		default:
			printf("Gecersiz islem secildi.\n");
			break;
		}
	}
}