#include <stdio.h>
#include <locale.h>
main(int argc, char *argv[]){
	#Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");

	if(argc==1){
		printf("Error: Faltan par�metros en la l�nea de comandos. \n");
	}
	if(argc==2){
	}
	if(argc==3){
	//correcto, ambos archivos m�s el nombre del programa
	}
	if(argc==4){
		printf("Error: Demasiados par�metros en la l�nea de comandos. \n");
	}
	else{
	}
	
	return 0;
}