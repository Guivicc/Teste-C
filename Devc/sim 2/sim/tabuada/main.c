#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int b, i, r, stop;
	
	printf("digite ate a tabuada que deseja ver.\n");
	scanf("%d", &stop);
	
	
	for(b=0; b<=stop; b++){
		for(i=0; i<=stop; i++){
			r = b * i;
			printf("%d multiplicado %d é = %d\n", b, i, r);}
			printf("\n");}
	
	return 0;
}
