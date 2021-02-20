#include <stdio.h>
#include <stdlib.h>

int N,d,e;
float det;
int I,J,K;

int main(){
	printf("Ingrese el numero de ecuaciones:");
	scanf("%d",&N);
	float A[N][N];
	float b[N];
	float x[N];
	
	for(d=0;d<N;d++){
		for(e=0;e<N;e++){
			printf("\nIngrese el valor para la matriz [%d][%d]",d,e);
			scanf("%f",&A[d][e]);
		}
	}	
	
		for(d=0;d<N;d++){
			printf("\nIngrese el valor independiente %d:",d);
			scanf("%f",&b[d]);
		}
	printf("La matriz queda de la siguiente forma:\n");
			printf("\n\t X\t Y\t X\t T    solucion\n");
	for(d=0;d<N;d++){
		for(e=0;e<N;e++){
			printf("\t[%.2f]",A[d][e]);
		}
		printf("\t[%.2f]",b[d]);
		printf("\n");
	}
	
	
	I=1;
    det=1; //paso uno
    for(I=1; I<=N-1; I=I+1)
       {
            det=det*A[I][I];
            if(det==0)
               {
                    printf("Hay un 0 en la matriz principal\n");
                    printf("Su determinante es:%f\n",det);
                    system("PAUSE");
               }
            for(K=I+1;K<=N;K=K+1)
               {
                   for(J=I+1;J<=N;J=J+1)
                       {
                          A[K][J]=A[K][J]-(A[K][I]*A[I][J])/A[I][I];
                       }
                   b[K]=b[K]-(A[K][I]*b[I])/A[I][I];
                }
                
       } //fin del for
      
    det=det*A[N][N];
   
    if(det==0)
       {
            printf("hay un 0 en la diagonal principal\n");
            printf("Su determinante es:%f",det);
            system("PAUSE");
       }
      
    x[N]=b[N]/A[N][N];
   
    for(I=N-1; I>=1; I=I-1)
       {
            x[I]=b[I]; 
            for(J=I+1; J<=N; J=J+1)
                 {
                    x[I]=x[I]-A[I][J]*x[J];
                 }
                 
            x[I]=x[I]/A[I][I]; 
        }
       
    printf("\n\n");
	   
       
    printf("\nSoluciones\n\n\n");
    printf("\nEl determinante de A es:%f",det);
    printf("\nLos valores de solucion son\n\n");
   
    for(J=1; J<=N; J++)
       {
            printf("x%d : %f",J,x[J]);
            printf("\n");
       }
      
    printf("\n");
    system("PAUSE");
    return 0;	
}


