#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "C:\Users\USUARIO\Documents\GitHub\twE100_1920-casino\Fichas.h"
#include "C:\Users\USUARIO\Documents\GitHub\twE100_1920-casino\Baraja.h"

int apostadas;
int i=0, j=0;
carta baraja[i];
int Suma;
void Comprobacion(carta n);
carta SacarCarta(carta n);
void MostrarCarta(carta n);
bool iguales= true;
int main(){
	srand (time (NULL));
	printf ("Bienvenido a la mesa de Blackjack.\n Jugara contra la casa.\n Para darle ventaja empezara usted las apuestas y la casa siempre aceptara\n");
	MostrarFichas(fichas);
	printf("¿Cuantas fichas desea apostar?\n");
	scanf ("%d", &apostadas);
	printf ("La primera carta es: ");
	
	
	

		
		




do
	{
		baraja[i] = SacarCarta (baraja[i]);
		MostrarCarta(baraja[i]);
		if (baraja[i].num <10){
		Suma = Suma + baraja[i].num;
		}else Suma = Suma+10;
		printf ("\nEl valor de sus cartas es:\n %d", Suma);
		i++;
		if (Suma < 21){
		printf ("\n\n\n¿Desea recibir otra carta?   ");
		scanf ("%c", &repetir);
		fflush (stdin);
		}else {
			printf("Lo siento, has perdido");
			break;
		}
		
	} while (repetir == 's' || repetir == 'S');
if (Suma < 21){
	if (Suma > SumaC){
		printf ("Enhorabuena, has ganado.");
		Fichas = SumarFichas (Fichas, apostadas);
	}else{
		printf ("Lo siento, has perdido");
		Fichas = RestarFischas (Fichas, apostadas)
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





