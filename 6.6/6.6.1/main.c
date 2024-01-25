#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double sayi, karekok;
	
	printf("Karekoku hesaplanacak sayiyi giriniz : ");
	scanf("%lf", &sayi);
	
	karekok = sqrt(sayi);
	
	printf ("%.2lf sayisinin karekoku = %.2lf", sayi, karekok);
	
	
	return 0;
}
