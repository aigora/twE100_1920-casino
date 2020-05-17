#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "Baraja.h"
#include "Fichas.h"

int apostadas;
int j=0, i, k=0, l=0;
carta baraja[20];
int Suma, SumaC;
char repetir;
void Comprobacion(carta n);
carta SacarCarta(carta n);
void MostrarCarta(carta n);
bool iguales= true;
int main(){
	srand (time (NULL));
	printf ("\t\t\t\t\tBienvenido a la mesa de Blackjack.\n Jugara contra la casa.\n Para darle ventaja empezara usted las apuestas y la casa siempre aceptara\n");
	MostrarFichas(fichas);
	printf("¿Cuantas fichas desea apostar?\n");
	scanf ("%d", &apostadas);
	fflush (stdin);
	printf ("La primera carta es: ");
	
	
	

do
	{	repetir = 'no';
		baraja[i] = SacarCarta (baraja[i]);
		MostrarCarta(baraja[i]);
		if (baraja[i].num <10 && baraja[i].num != 1){
		Suma = Suma + baraja[i].num;
		}else Suma = Suma+10;
		printf ("\nEl valor de sus cartas es:\n %d\n", Suma);
		i++;
		if (Suma <= 21){
		OtraCarta: printf ("\n\n\n¿Desea recibir otra carta?\n");
		scanf ("%c", &repetir);
		fflush (stdin);
		}else {
			for (k=0; k <= i; k++){
				if(baraja[l].num == 1){
				Suma= Suma-9;
				l++;
				printf("\nSe ha pasado de 21, su as pasa a valer 1.");
				printf ("\nEl valor de sus cartas es:\n %d\n", Suma);
				goto OtraCarta;
				}else l++;
			}
			repetir == 'no';
		}
	} while (repetir == 's' || repetir == 'S');
	do{ l= i;
		baraja [i] = SacarCarta (baraja[i]);
		MostrarCarta(baraja[i]);
		if (baraja[i].num <10 && baraja[i].num !=1){
			SumaC = SumaC + baraja[i].num;
		}else SumaC = SumaC + 10;
		printf("\nEl valor de las cartas del Crupier es:\n %d", SumaC);
		i++;
		if (SumaC > 21){
			for (k=0; k<=i; k++){
				if (baraja[l].num ==1){
					SumaC = SumaC - 9;
					l++;
					printf ("\nLa suma del Crupier se pasa de 21, su has pasa a valer 1.");
					printf ("\nEl valor de las cartas del Crupier es:\n %d", SumaC);
					break;
				}else l++;
			}
		}
		if (SumaC <=17){
			printf ("\nEl Crupier recibe otra carta, debido a que su suma es menor que 17.");
		}
	}while (SumaC<=17);
if (SumaC <= 21){	
if (Suma <= 21){
	if (Suma >= SumaC){
		printf ("\n\nEnhorabuena, has ganado.");
		fichas = SumarFichas (fichas, apostadas);
		MostrarFichas(fichas);
	}else{
		printf ("\n\nLo siento, has perdido");
		fichas = RestarFichas (fichas, apostadas);
		MostrarFichas(fichas);
	}
}else{
		printf ("\n\nLo siento, has perdido");
		fichas = RestarFichas (fichas, apostadas);
		MostrarFichas(fichas);}
}else {
if (Suma <=21){
	printf ("\n\nEnhorabuena, has ganado");
	fichas = SumarFichas (fichas, apostadas);
	MostrarFichas(fichas);
}else {
	printf("\n\nLo siento, has perdido");
	fichas = RestarFichas (fichas, apostadas);
	MostrarFichas(fichas);
}
}
	return 969;
}


void Comprobacion(carta n){
	baraja[i] = n;
	for (j =0; j <= i; j++){
		if(n.num == baraja[j].num && n.ok == baraja[j].ok && i!= j) {
		iguales = true;
		break;}
		else{
		iguales = false;
	}
}}

carta SacarCarta(carta n){
	do{
		n= SeleccionCarta();
		Comprobacion(n);}while(iguales == true);
	return n;
}
void MostrarCarta(carta n){
	printf ("|%d %s|",n.num,n.palo.c_str());
}





