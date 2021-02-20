#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double e=M_E;
float f(float x);
float fp(float x);
int conta=-1;
void caratula (void){
	printf("\t\t\t-------Alumnos-------\n\tBetsabe Chavez Carbajal \tMat:1317253018 \n\tAlonso Diaz Gutierrez \t\tMat:1317253028");
	printf("\n\tGustavo Jimenez Velazquez \tMat:1317253064\n\n\t\t\tGrupo:INI4VA\n\t\t\tMetodo:Newton-Rapshon\n\t\t\tFormula:tan^-1(x)+x-1\n");
}
int main(){
	caratula();
float x[50],xi,div,err;
int i=0;
printf("Introduce el valor inicial de xi=>");
scanf("%f",&xi);
err=1;
x[0]=xi;
printf("Valor de xo=%f\n\n",x[0]);
printf("   Iteracion\t\tRaiz\t\t    Error\n");
while(err>0.1)
{
conta=conta+1;
div=(f(x[i])/fp(x[i]));
x[i+1]= (x[i]-div);
err=(x[i+1]-x[i]);
err=err/x[i+1];
err=fabs(err)*100;
printf("\t%d\t%.15f\t %.5f\n\n",conta,x[i+1],err);
i++;	
	}
system("pause");
}

float f(float x){
float y;
y=pow(x,2)-2*x-3;
return y;
}

float fp(float x){
float y;
y=2*x-2;
return(y);
}
