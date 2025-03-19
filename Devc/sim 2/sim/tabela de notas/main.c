#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    setlocale(LC_ALL, "portuguese");
		
	float lab, semestre, exfinal, m, mf;
	
	printf("informe a nota de laboratório.\n");
	scanf("%f", &lab);
	
	printf("informe a nota da avaliação semestral.\n");
	scanf("%f", &semestre);
	
	printf("informe a nota do exame final.\n");
	scanf("%f", &exfinal);
	
	
	// contas
	lab = lab * 2;
	semestre = semestre * 3;
	exfinal = exfinal * 5;
	m = lab + semestre + exfinal;
	mf = m / 10.0;


    //nota acima de 8 média A	
	if (mf >= 8.0)printf("a nota final do aluno foi %.2f ou A.\n", mf);
	
	//nota acima de 7 média B
	else if (mf >= 7.0)printf("a nota final do aluno foi %.2f ou B.\n", mf);
	
	//nota acima de 6 média C
	else if (mf >= 6.0)printf("a nota  final do aluno foi %.2f ou C.\n", mf);
	
	//nota acima de 5 média D
	else if (mf >= 5.0)printf("a nota final do aluno foi %.2f ou D.\n", mf);
	
	//nota acima de 0 méia E
	else if (mf >= 0.0)printf("a nota final do aluno foi %.2f ou E.\n", mf);
	
	system("pause");
	return 0;
}
