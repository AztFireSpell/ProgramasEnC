#include <stdio.h>
#include <stdlib.h>

int main(){
	
		int arr[5],i=0,aux,j,temp,a,k;
		
		//Le pedimos al usuario que ingrese 5 numeros
			while(i<5){
				printf("Ingrese el [%d] numero:\n",i+1);
				scanf("%d",&arr[i]);
				i++;
			}

		//Se hace la ordenacion a traves del metodo burbuja
		for(i=5/2;i!=0;i=i/2){
			j=1;
			do{
				j=0;
				for(k=i;k<5;k++){
					if(arr[k-i]>arr[k]){
						aux=arr[k];
						arr[k]=arr[k-i];
						arr[k-i]=aux;
						j--;
					}
				}
			}while(j!=0);
		}

		//Se muestran los numeros en orden
		printf("Los numeros ordenados a traves del metodo burbuja quedan:\n");
		for(i=0;i<5;i++){
			printf("\n%d",arr[i]);
		}

}

