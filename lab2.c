#include <stdio.h>

/* bir ��renci struct'� tan�mlayarak, ��rencinin id'si, ismi ve notu tutulacakt�r. 
Vize ve final notlar� bir fonksiyon arac�l���yla al�nacak ve bu notlara g�re ��rencinin genel notu hesaplanacakt�r. 
- struct'ta bulunmas� gereken bilgiler: id, isim, not
- bir fonksiyon ile vize ve final notlar� al�n�p genel not hesaplanacak
- hesaplanan genel not ekrana yazd�r�acak */


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
	printf("%s adl� ��rencinin notu: %.2f\n", ogrenci.isim, not);
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
