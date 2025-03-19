#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int seg, min, hr, tmin, restsec, resthr;
	
	printf("insira o tempo em segundos.\n");
	scanf("%d", &seg);
	fflush;
	
	
    hr = seg / 3600;
    tmin = seg / 60;
	restsec = seg % 3600;
    min = restsec / 60;
	
	
	printf("o tempo em segundos e %d.\n", seg);
	printf("o tempo em minutos e %d e %d segundos.\n", tmin, restsec % 60);
	printf("o tempo em horas %d minutos %d segundos %d.\n", hr, min, restsec % 60);
	
	system("pause");
	return 0;
}
