#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float ana_para, zaman, faiz_orani, faiz_miktari;
	
	printf("Ana para miktarini giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamani giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oranini giriniz: ");
	scanf("%f", &faiz_orani);
	
	faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f", faiz_miktari);
	
	
	return 0;
}
