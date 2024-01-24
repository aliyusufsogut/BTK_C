#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi1 = 17, sayi2 = 5;
	
	int tamsayi_bolme_sonucu;
	float gercel_bolme_sonucu_float;
	double gercel_bolme_sonucu_double;
	int gercel_bolme_sonucu_float_tamsayi;
	
	tamsayi_bolme_sonucu = sayi1 / sayi2;
	printf("Tamsayi Bolme Sonucu = %d\n", tamsayi_bolme_sonucu);
	
	gercel_bolme_sonucu_float = (float) sayi1 / sayi2;
	printf("Gercel Bolme sonucu (float) = %.20f\n", gercel_bolme_sonucu_float);
	
	gercel_bolme_sonucu_double = (double) sayi1 / sayi2 ;
	printf("Gercel Bolme Sonucu (double) = %.20f\n", gercel_bolme_sonucu_double);
	
	gercel_bolme_sonucu_float_tamsayi = (int) gercel_bolme_sonucu_float;
	printf("Gercel Bolme Sonucu (float)'un Tamsayiya Donusturulmus Hali = %d\n",
					gercel_bolme_sonucu_float_tamsayi );
	
	
	return 0;
}
