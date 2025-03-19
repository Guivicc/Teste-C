#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int mat  [5][5] = {{1, 2, 3, 4, 5},
	                   {6, 7, 8, 9, 10},
					   {11, 12, 13, 14, 15},
					   {16, 17, 18, 19, 20},
				       {21, 22, 23, 24, 25}};
	
	int L, C;
	  printf ("primeira linha.\n");
	    for(C=0; C<5; C++){
	  	printf("%d", mat [0][C]);}
	  	
	  	printf("toda a tabela.\n");
	  	for(L=0; L<5; L++){
	  		for(C=0; C<5; C++)
	  		printf(" %d", mat [L][C]);
		  }
						



	return 0;
}
