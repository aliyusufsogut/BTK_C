#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	i = 0;
	
	printf("%d\n", i);
	
	printf("%d\n", i++ );  // �nce mevuct de�er yaz�lacak, sonra de�er art�r�lacak
	
	printf("%d\n", i);
	
	printf("%d\n", ++i);  // �nce de�er art�r�lacak, sonra yeni de�er yaz�lacak
	
	printf("%d\n", i);
	
	
	return 0;
}
