#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, multiplo;
	
	for(i = 0; multiplo < 9999; i++){
		multiplo = i * 7;
		printf("7 * %d = %d\n",i, multiplo);
	}
	return 0;
}
