#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x1=0,x2=0,x3=0,x4=0,x11=0,x22=0,x33=0,x44=0;
float err1=100,err2=100,err3=100,err4=100;
int conta=0;
int main(){
		printf("Metodo jacobi\n");
		printf("\nImplementado para el ejercicio 1 del examen de Metodos numericos");
		printf("\nAlumnos: Alonso Diaz Gutierrez,Gustavo Jimenez Velazquez,Betsabe Chavez Carbajal");
		printf("\nMatriculas:1317253028,1317253064,1317253018");
		while(err1>0.001 && err2>0.001 && err3>0.001 && err4>0.001){
			printf("\n\nXn/K \tIteracion:%d\nX1 \t%f \tError:%f \nX2  \t%f \tError:%f \nX3 \t%f \tError:%f \nX4 \t%f \tError:%f",conta,x1,err1,x2,err2,x3,err3,x4,err4);
			x1=((6+(1)*(x2)-(2)*(x3))/10);
			x2=((25+(1)*(x1)+(1)*(x3)-(3)*(x4))/11);
			x3=((-11-(2)*(x1)+(1)*(x2)+(1)*(x4))/10);
			x4=((15-(1)-(x2)+(1)*(x3))/8);
			err1=((x1-x11)/x1)*100;
			if(err1<0){
				err1=err1*-1;
			}
			err2=((x2-x22)/x2)*100;
			if(err2<0){
				err2=err2*-1;
		 }
			err3=((x3-x33)/x3)*100;
			if(err3<0){
				err3=err3*-1;
			}
			err4=((x4-x44)/x4)*100;
			if(err4<0){
				err4=err4*-1;
			}
			x11=x1;
			x22=x2;
			x33=x3;
			x44=x4;
			conta++;
			if(conta>5){
			if(err1==err2 && err2==err3 && err3==err4 && err4==err1){
				exit(-1);
			}	
			}
			printf("\n");
			system("pause");	
			
		}
}
