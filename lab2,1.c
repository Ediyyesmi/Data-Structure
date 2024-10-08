#include <stdio.h>

//girilen sayının üssünü rekürsif olarak hesaplayan program


int usAl(int taban, int us){
	if(us==0){
		return 1;
	}else if(us==1){
		return taban;
	}else{
		return taban * usAl(taban,us-1);
	}
}

int main(){
	
	int taban, us;
	printf("taban degerini girin: ");
	scanf("%d",&taban);
	printf("us degerini girin: ");
	scanf("%d",&us);
	
	int sonuc=usAl(taban,us);
	printf("%d^%d: %d",taban,us,sonuc);
	
	
	return 0;
}
