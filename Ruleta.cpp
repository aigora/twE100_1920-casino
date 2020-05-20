#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "C:\Users\USUARIO\Documents\GitHub\twE100_1920-casino\Fichas.h"
 
#define DIM 20


int apostadasR;
int presentacionR(); 
int n= 0, m[DIM];

int main(){
	srand (time (NULL));
	printf ("\t\t\t\t\tBienvenido a la Ruleta.\n Jugara contra la casa.\n Para darle ventaja empezara usted las apuestas y la casa siempre aceptara\n");
	MostrarFichas(fichas);
do{ apostadasR =0;
	do {
	printf("¿Cuantas fichas desea apostar?\n");
	scanf ("%d", &apostadasR);
	fflush (stdin);
	if(apostadasR > fichas){
		printf("No dispone de tantas fichas");
		MostrarFichas(fichas);
	}
	}while (apostadasR > fichas);


char opcion;
do {
	puts ("Elija la apuesta que desea\n");
	puts ("A. Apostar numeros\n");
	puts ("B. Apostar pares o impares\n");
	puts ("C. Apostar columnas\n");
	puts ("D. Apostar docenas\n");
	puts ("E. Apostar falta o pasa \n");
	scanf ("%c", &opcion);
	fflush(stdin);

  switch (opcion){
		case 'A':
		case 'a':
	do{
		printf("Indique el numero al que quiere apostar\n");
		scanf ("%d",&n);
 	}while(n<=0 || n>36); 
	 break;
	 
		case 'B':
		case 'b':
	do{
		printf("1. Apostar a pares\n");
		printf("2. Apostar a impares\n");
		scanf ("%d",&n);
	}while(n!=1 && n!=2);
	 break;
	 
		case 'C':
		case 'c':	
	do {
		printf ("1. Apostar a la primera columna \t (1,4,7,10,13,16,19,22,25,28,31,34\n");
 		printf ("2. Apostar a la segunda columna \t (2,5,8,11,14,17,20,23,26,29,32,35)\n");
 		printf ("3. Apostar a la tercera columna \t (3,6,9,12,15,18,21,24,27,30,33,36)\n");
		scanf ("%d",&n);
	}while(n!=1 && n!=2 && n!=3);
 	break;
 	
 		case 'D':
 		case 'd':
	do {
 		printf ("1. Apostar a la primera docena \t (1,2,3,4,5,6,7,8,9,10,11,12)\n");
 		printf ("2. Apostar a la segunda docena \t (13,14,15,16,17,18,19,20,21,22,23,24)\n");
 		printf ("3. Apostar a la tercera docena \t (25,26,27,28,29,30,31,32,33,34,35,36)\n");
		scanf ("%d",&n);}while(n!=1 && n!=2 && n!=3);
	} while((m[1]<= 1 || m[1]>= 12) || (m[2]<= 13 || m[2]>= 24) || (m[3]<= 25 || m[3]>= 36));
	break;
 
		case 'E':
		case 'e':
 	do {
 		printf ("1. Apostar falta \t (1-18)\n");
 		printf ("2. Apostar pasa \t (19-36)")
 		scanf ("%d",&n);
	}while(); 
	break;
}while()
}while (repetirR == 's' || repetirR == 'S');
	return 969;
}


