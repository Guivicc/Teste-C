#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   setlocale(LC_ALL, "portuguese");
   
   int mat1[3][3];
   
   int i, j, x, ifinal, jfinal, flag1=0;
   //preenchendo a matriz
   for(i=0; i<3; i++){
   	 for(j=0; j<3; j++){
        ifinal = i + 1; //quadrante para usuario
        jfinal = j + 1; //quadrante para usuario
      	printf("preencha o quadrante %d %d.\n", ifinal, jfinal);
      	scanf("%d", &mat1[i][j]);
      	printf("o material do quadrante %d %d é %d.\n", ifinal, jfinal, mat1[i][j]); } }
   
   //fim do preenchimento da matriz
   
   printf("digite o valor que deseja procurar na tabela.\n");
   scanf("%d", &x);
   
   for(i=0; i<3; i++){
   	for(j=0; j<3; j++){
   	    ifinal = i + 1; //quadrante para usuario
        jfinal = j + 1; //quadrante para usuario
   	    if(mat1[i][j] == x){
   	    	flag1=1;
   	    	printf("o valor %d esta no quadrante %d %d.\n", x, ifinal, jfinal);
		  
	        } } }
    if(flag1 == 0)printf("o valor não foi encontrado em nenhum quadrante.\n");   
   
	return 0;
}
