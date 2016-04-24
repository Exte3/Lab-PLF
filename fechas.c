#include <stdio.h>
#include <locale.h>
#include <string.h>
main(int argc, char *argv[]){
	//Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");

	if(argc==1){
		printf("Error: Faltan par�metros en la l�nea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
		//en este caso no se puede crear salida
		//muy importante
	}
	if(argc==2){
		printf("Error: Falta par�metro en la l�nea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
	}
	if(argc==3){
		//correcto, ambos archivos m�s el nombre del programa
		FILE *fp;
		fp = fopen(argv[1],"r");
		if(fp==NULL){
			printf("Error: El archivo de entrada no existe. \n");
			return 1;
		}
		else{
			//En este punto se empieza a leer archivo
			while(feof(fp)==0){
				char linea[100];
				fgets(linea,100,fp);
				//Aqu� debe haber otro if
				
				printf("%s", linea);
			}
			
		}
	}
	if(argc>=4){
		printf("Error: Demasiados par�metros en la l�nea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
	}
	else{
	}
	
	return 0;
}