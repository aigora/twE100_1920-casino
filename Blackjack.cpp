#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "C:\Users\migue\Documents\GitHub\twE100_1920-casino\Baraja.h"
#include "C:\Users\migue\Documents\GitHub\twE100_1920-casino\Fichas.h"

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
		printf ("\nEl valor de sus cartas es:\n %d", Suma);
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
				printf ("\nEl valor de sus cartas es:\n %d", Suma);
				goto OtraCarta;
				}else l++;
			}
			printf("\nLo siento, has perdido");
			repetir == 'no';
		}
	} while (repetir == 's' || repetir == 'S');
if (Suma <= 21){
	if (Suma > SumaC || Suma == SumaC){
		printf ("\n\nEnhorabuena, has ganado.");
		fichas = SumarFichas (fichas, apostadas);
	}else{
		printf ("\n\nLo siento, has perdido");
		fichas = RestarFichas (fichas, apostadas);
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





