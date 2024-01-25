#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double taban, kuvvet, sonuc;
	
	
	printf("Taban degerini giriniz: ");
	scanf("%lf", &taban);
	printf("Kuvvet degerini giriniz: ");
	scanf("%lf", &kuvvet);
	
	sonuc = pow(taban, kuvvet);
	
	printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
	
	return 0;
}
