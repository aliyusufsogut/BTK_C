#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	i = 0;
	
	printf("%d\n", i);
	
	printf("%d\n", i++ );  // önce mevuct deðer yazýlacak, sonra deðer artýrýlacak
	
	printf("%d\n", i);
	
	printf("%d\n", ++i);  // önce deðer artýrýlacak, sonra yeni deðer yazýlacak
	
	printf("%d\n", i);
	
	
	return 0;
}
