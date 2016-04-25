#include <stdio.h>
#include <locale.h>
#include <string.h>
main(int argc, char *argv[]){
	//Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");

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
					printf("%s\n", token);
					token = strtok(NULL,"-/");
					c = strcmp(linea, token);
					if(c==0){
						printf("todo se derrumbo /n");
					}
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