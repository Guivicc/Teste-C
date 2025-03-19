#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calc(int seg, int *rest_seg, int *min_, int *rest_min, int *hr_){
	
	 *min_ = seg / 60;
	 *rest_seg = seg % 60;
	 *hr_ = *min_ / 60;
	 *rest_min = *min_ % 60;
}
int main(int argc, char *argv[]) {
	
	int seg, min, hr, restseg, restmin;
	
	printf("informe os segundos.\n");
	scanf("%d", &seg);
	
	calc(seg, &restseg, &min, &restmin, &hr);
	
	printf("hr:%d min:%d seg:%d.", hr, restmin, restseg);
	
	
	return 0;
}
