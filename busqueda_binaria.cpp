#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int num=0,posicion;
	int datos[5]={8,12,2,15,4};
	int temp,valor;
	bool band=false;
	
	
	
	
	printf("Los datos capturados fueron los siguientes: \n");
	for (int i=0;i<5;i++){
		 	printf("%i ",datos[i]);
		 	printf("\n");
				}
				
				printf("\n");
	for (int i=0; i<4; i++) {
	  for (int j=i+1; j<5; j++){
	 	if (datos[i]>datos[j]){
				temp=datos[i];
		  		datos[i]=datos[j];
		   		datos[j]=temp;
			   }
		   }
		}
				printf("LOS NUMEROS ORDENADOS SON :\n");
				for(int i=0; i<5; i++){
					printf("%i ", datos[i]);
				}		
		printf("\n");
		
	printf("Que numero deseas buscar:")	;
	scanf("%d",&num);
	
	for(int i=0;i<5;i++){
					if (datos[i]==num){
						band=true;
						posicion=i;
							}
					else{
						band=false;
					}
			
				if (band==true){
					printf("El valor fue encontrado en la posicion %d. \n", posicion+1);
				}
				if(band==false){
			    printf("El valor No fue encontrado");
			    printf("\n");
				}
					system("pause");
			
			}		    
		system("cls");
	return 0;
}
