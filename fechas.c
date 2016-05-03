#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
typedef struct dia{
	char *num;
	struct dia *sgt;
}dia;
typedef struct meses{
	char *num;
	struct meses *sgt;
}meses;
dia *asigmem(){
	dia *cabeza;
	cabeza=malloc(sizeof(dia));
	dia *sgti;
	sgti=malloc(sizeof(dia));
	cabeza->sgt=sgti;
	dia* auxiliar = cabeza->sgt;
	int i = 0;
	while(i < 80){
	    dia* sgti = malloc(sizeof(dia));
		auxiliar->sgt=sgti;
		auxiliar=auxiliar->sgt;
		i++;
	}
	//printf("TERMINE");
	dia* probando = cabeza->sgt;
	int holi = 1;
	while (probando->sgt != NULL)
	{
		printf("%d\n", holi);
		probando = probando->sgt;
		holi = holi + 1;
		
	}
	return cabeza;
}
mes *asigmem(){
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
	//printf("TERMINE");
	mes* probando = cabeza->sgt;
	int holi = 1;
	while (probando->sgt != NULL)
	{
		printf("%d\n", holi);
		probando = probando->sgt;
		holi = holi + 1;
		
	}
	return cabeza;
}
meses *crearmeses(meses *cabeza){

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
																																						cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09";
																																							cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09";
																																								cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "09";
	cabeza->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->sgt->num = "31 ";
	return cabeza;
}

main(int argc, char *argv[]){
	//Con este parametro se pueden usar acentos y la biblioteca locate
	setlocale(LC_ALL, "spanish");
	
	creardias(asigmem());
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