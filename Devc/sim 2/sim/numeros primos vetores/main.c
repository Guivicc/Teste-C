#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// teste 1 3 7 9 11 13 17 19 21
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
    
	//vetores	
	int v1[9];
	
	//inteiros
    int i, j, k, ifinal, cont;
    
    for(i=0; i<9; i++){
        ifinal = i + 1;
    	printf("insira o dado na posição %d.\n", ifinal);
    	scanf("%d", &v1[i]);
	}
	
	for(i=0; i<9; i++){
		ifinal = i + 1; 
		cont = 0;
		for(j=1; j<=v1[i]; j++){
			if(v1[i] % j == 0){cont++;} } 
			
        if(cont == 2){printf("%d é um numero primo, posição %d.\n", v1[i],ifinal);
		} 
	   
    
	}
	
	system("pause");
	
	return 0;
}
