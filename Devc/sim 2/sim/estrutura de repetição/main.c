#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int stopfor, stopwhile, stopdowhile;
	
	
	//estrura de FOR
	for(stopfor = 0; stopfor <= 9999; stopfor++){
		printf("stopfor é %d.\n", stopfor);
	}
	
	//estrura de WHILE
	stopwhile = 0;
	
	while(stopwhile <= 9999){
	printf("while é %d.\n", stopwhile);
	stopwhile++;
	}
	
	//estrutura de DOWHILE
	stopdowhile = 0;
	
	do{printf("dowhile é %d.\n", stopdowhile);
	stopdowhile++;
	}while(stopdowhile <= 8899);
	
	
	return 0;
}
