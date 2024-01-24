#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 3;
	printf("%d\n",i);
		
	i += 5; // i = i + 5
	printf("%d\n",i);
	
	i -= 5; // i = i - 5
	printf("%d\n",i);
	
	i *= 3; // i = i * 3
	printf("%d\n",i);
	
	i /= 3; // i = i / 3
	printf("%d\n",i);
	
	return 0;
}
