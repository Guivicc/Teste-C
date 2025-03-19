#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
 
int main(int argc, char *argv[]) {
	
	int a, b, c;
	
a = 3;
b = 4;
c = &a;
b++;
*c = a+2;
printf("%d, %d", a, b);
	return 0;
}
