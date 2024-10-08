#include <stdio.h>

/* bir öðrenci struct'ý tanýmlayarak, öðrencinin id'si, ismi ve notu tutulacaktýr. 
Vize ve final notlarý bir fonksiyon aracýlýðýyla alýnacak ve bu notlara göre öðrencinin genel notu hesaplanacaktýr. 
- struct'ta bulunmasý gereken bilgiler: id, isim, not
- bir fonksiyon ile vize ve final notlarý alýnýp genel not hesaplanacak
- hesaplanan genel not ekrana yazdýrýacak */


struct ogrenci{
	int id;
	char isim[30];
	float not;
};

float nothesapla(struct ogrenci ogrenci);

int main(){
	
	struct ogrenci ogrenci;
	
	printf("ogrenci id girin: ");
	scanf("%d",&ogrenci.id);
	
	printf("isim girin: ");
	scanf("%s",&ogrenci.isim);
	
	float not = nothesapla(ogrenci);
	printf("%s adlý öðrencinin notu: %.2f\n", ogrenci.isim, not);
	return 0;
}

float nothesapla(struct ogrenci ogrenci){
	float final, vize, not;
	printf("final notunu gir: ");
	scanf("%f",&final);
	printf("vize notunu gir: ");
	scanf("%f",&vize);
	return (vize*0.4)+(final*0.6);
	
}
