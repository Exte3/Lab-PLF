#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
typedef struct dia{
	char *num;
	struct dia *sgt;
}dia;
/*typedef struct mes{
	char *num;
	struct mes *sgt;
}mes;
*/
dia *asigmem(int a){
	dia *cabeza;
	cabeza=malloc(sizeof(dia));
	dia *sgti;
	sgti=malloc(sizeof(dia));
	cabeza->sgt=sgti;
	dia* auxiliar = cabeza->sgt;
	int i = 0;
	while(i < a){
	    dia* sgti = malloc(sizeof(dia));
		auxiliar->sgt=sgti;
		auxiliar=auxiliar->sgt;
		i++;
	}
	//dia* probando = cabeza->sgt;
	return cabeza;
}
/*mes *asigmemm(){
	mes *cabeza;
	cabeza=malloc(sizeof(mes));
	mes *sgti;
	sgti=malloc(sizeof(mes));
	cabeza->sgt=sgti;
	mes* auxiliar = cabeza->sgt;
	int i = 0;
	while(i < 84){
	    mes* sgti = malloc(sizeof(mes));
		auxiliar->sgt=sgti;
		auxiliar=auxiliar->sgt;
		i++;
	}
	//mes* probando = cabeza->sgt;
	return cabeza;
}
*/
dia *crearmeses(dia *cabeza){

	cabeza->num = "1 ";
	cabeza->sgt->num = "2 ";
	cabeza->sgt->sgt->num = "3 ";
	cabeza->sgt->sgt->sgt->num = "4 ";
	cabeza->sgt->sgt->sgt->sgt->num = "5 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->num = "6 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->num = "7 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "8 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "9 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "10 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "11 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "12 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "01 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "02 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "03 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "04 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "05 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "06 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "07 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "08 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 1";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 2";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 3";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 4";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 5";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 6";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 7";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 8";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 9";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 10";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 11";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 12";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 01";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 02";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 03";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 04";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 05";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 06";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 07";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 08";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 09";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 1 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 2 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 3 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 4 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 5 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 6 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 7 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 8 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 9 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 10 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 11 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 12 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 01 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 02 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 03 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 04 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 05 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 06 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 07 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 08 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = " 09 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "1";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "2";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "3";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "4";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "5";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "6";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "7";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "8";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "9";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "10";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "11";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "12";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "01";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "02";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "03";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "04";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "05";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "06";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "07";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "08";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09";
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
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "13";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "14";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "15";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "16";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "17";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "18";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "19";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "20";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "21";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "22";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "23";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "24";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "25";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "26";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "27";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "28";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "27";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "28";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "29";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "30";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "31";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "01";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "02";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "03";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "04";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "05";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "06";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "07";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "08";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "01 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "02 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "03 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "04 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "05 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "06 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "07 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "08 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "1 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "2 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "3 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "4 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "5 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "6 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "7 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "8 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "9 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "10 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "11 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "12 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "13 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "14 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "15 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "16 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "17 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "18 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "19 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "20 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "21 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "22 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "23 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "24 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "25 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "26 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "27 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "28 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "29 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "30 ";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "31 ";
	return cabeza;
}
int esta(dia *cabeza, char *elemento){
	dia* aux = cabeza->sgt;
	while (aux->sgt != NULL)
	{
		char *cosa=aux->num;
		int t = strcmp(elemento, cosa);
		if(t==0){
			return 1;
		}
		aux = aux->sgt;
	}
	return 0;
}

main(int argc, char *argv[]){
	//Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");
	
	creardias(asigmem(80));
	//printf();
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
			dia* listd = creardias(asigmem(80));
			dia* listm = creardias(asigmem(84));
			int c=0;
			while(feof(fp)==0){
				char linea[100];
				fgets(linea,100,fp);
				char *token;
				//Aquí debe haber otro if
				token = strtok(linea,"-/");
				//printf("%s", token);
				while(token!=NULL){
					//printf("%s", token);
					if(c==0){
						printf("%i",esta(listd, token));
					}
					else if(c==1){
						printf("%i",esta(listm, token));
					}
					else if(c==2){
						printf("%i",esta(listd, token));
						c=-1;
					}
					token = strtok(NULL,"-/");
					c++;
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