#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
typedef struct dia{
	char *num;
	struct dia *sgt;
}dia;
dia *asigmem(){
	dia *cabeza;
	cabeza=malloc(sizeof(dia));
	dia *sgti;
	sgti=malloc(sizeof(dia));
	cabeza->sgt=sgti;
	int i = 0;
	while(i == 12){
		if(sgti==NULL){
			sgti = malloc(sizeof(dia));
		}
		sgti=sgti->sgt;
		i++;
	}
	return cabeza;
}
dia *creardias(dia *cabeza){
	cabeza->num = "1";
	cabeza->sgt->num = "2";
	cabeza->sgt->sgt->num = "3";
	cabeza->sgt->sgt->sgt->num = "4";
	cabeza->sgt->sgt->sgt->sgt->num = "5";
	cabeza->sgt->sgt->sgt->sgt->sgt->num = "6";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->num = "7";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "8";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "9";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "10";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "11";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "12";
	
	return cabeza;
}
main(int argc, char *argv[]){
	//Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");
	asigmem();
	//creardias();
	if(argc==1){
		printf("Error: Faltan parámetros en la línea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
		//en este caso no se puede crear salida
		//muy importante
	}
	if(argc==2){
		printf("Error: Falta parámetro en la línea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
	}
	if(argc==3){
		//correcto, ambos archivos más el nombre del programa
		FILE *fp;
		fp = fopen(argv[1],"r");
		if(fp==NULL){
			printf("Error: El archivo de entrada no existe. \n");
			return 1;
		}
		else{
			//En este punto se empieza a leer archivo
			int c;
			while(feof(fp)==0){
				char linea[100];
				fgets(linea,100,fp);
				char *token;
				//Aquí debe haber otro if
				token = strtok(linea,"-/");
				//printf("%s", token);
				while(token!=NULL){
					printf("%s", token);
					token = strtok(NULL,"-/");
				}
				
			}
			fclose ( fp );
			
		}
	}
	if(argc>=4){
		printf("Error: Demasiados parámetros en la línea de comandos. \n");
		printf("Uso: fechas.exe archivo_entrada archivo_salida \n");
	}
	else{
	}
	
	return 0;
}