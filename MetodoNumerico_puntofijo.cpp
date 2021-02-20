#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e=M_E,x,x1=1,err;
int conta=0;
void caratula (void){	
	printf("\n\t\t\tMetodo:Punto fijo\n\t\t\tFormula:e^-x+(x)-2\n");
}

int main(){
	caratula();
	printf("\nNO.Iteracion          X                 X+1              Error");
	while(x1!=x){
		printf("\n [%d]\t",conta);
		conta=conta+1;
		x1=2-pow(e,-(x1));
		x=2-pow(e,-(x1));		
		err=((x-x1)/x)*100;
		printf("       %.15lf",x1);
		printf("  %.15lf",x);
		printf("  %.15lf",err);
	}
	
	return 0;
}
