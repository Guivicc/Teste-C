#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int M = 25;
	
	int num1[M], num2[M], num3[M], i, j;
	
	
	srand(time(NULL));
	
	for(i = 0; i < M; i++){
		num1[i] = rand();
		for(j = 0; j < M; j++){
			num2[j] = rand();
		}
	}
	
	 
	for(i = 0; i < M; i++){
		num3[i] = num1[i] + num2[i];
		printf("vetor 1 %.5d. vetor 2 %.5d. vetor 3 %.5d.\n", num1[i], num2[i], num3[i]);
	}
	return 0;
}
