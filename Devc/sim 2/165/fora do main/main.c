#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sim(int n){
	if(n==0)
		return 0;
	
	else if(n==1)
		  return 1;
		  
		  else 
		  	return sim(n-1) + sim(n-2);
	
}

int main(int argc, char *argv[]) {
	
	int n;
	
	printf("digite ate qual numero da tabela de fibonacci\n");
	scanf("%d",&n);
	
		printf("%d", sim(n));
	
	system("pause");
	return 0;
}
