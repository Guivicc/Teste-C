#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, i, stop, atual;
	
	n1=0;
	n2=1;
	
	
	printf("escolha ate qual termo sera calculado.\n");
	scanf("%d", &stop);
	
	printf("sera impresso ate o termo %d\n", stop);
	
	printf("%d-", n1);
	printf("%d-", n2);
	
	for(i=3; i<=stop; i++){
		atual = n1 + n2;
		printf("%d-", atual);
		n1=n2;
		n2=atual;
		
	}
	
	return 0;
}
