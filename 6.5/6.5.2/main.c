#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float cm, metre, km;
	
	printf("Uzunlugu santimetre cinsinden giriniz: ");
	scanf("%f", &cm);
	
	metre = cm / 100.0;
	km    = cm / 100000.0;
	
	printf("Metre cinsinden uzunluk = %.2f m \n", metre);
	printf("Kilometre cinsinden uzunluk = %.2f km", km);
	
	return 0;
}
