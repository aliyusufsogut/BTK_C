#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 5, y = 6, z = 50;
	printf("%d", x + y + z);
	printf("\n...\n");
	
	x = y = z = 50;
	printf("%d", x + y + z);
	
	
	return 0;
}
