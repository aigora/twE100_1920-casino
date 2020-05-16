#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "C:\Users\migue\Documents\GitHub\twE100_1920-casino\Baraja.h"
#include "C:\Users\migue\Documents\GitHub\twE100_1920-casino\Fichas.h"

carta baraja[10];
int i=0, j=0;
void Comprobacion(carta n);
carta SacarCarta(carta n);
void MostrarCarta(carta n);
bool iguales= true;
char jugar;
int main(){
	srand (time (NULL));
	carta carta01, carta02, carta03, carta04, carta05, carta11, carta12, carta21, carta22;
	printf ("Bienvenido a la mesa de poker.\n Jugara contra la casa.\n Para darle ventaja empezara usted las apuestas y la casa siempre aceptara\n");
	MostrarFichas(fichas);
	printf("La ciega son 50 fichas. ¿Aceptas?\n");
	scanf ("%c", &jugar);
	if(jugar == 'S' || jugar == 's'){
	RestarFichas(fichas,50, &fichas);
	MostrarFichas(fichas);
	printf ("\n'Se reparten las cartas a los jugadores...'\n");
	carta11= SacarCarta(carta11);
	carta12= SacarCarta(carta12);
	carta21= SacarCarta(carta21);
	carta22= SacarCarta(carta22);
	carta01= SacarCarta(carta01);
	carta02= SacarCarta(carta02);
	carta03= SacarCarta(carta03);
	carta04= SacarCarta(carta04);
	carta05= SacarCarta(carta05);
	
	printf ("\n\nSobre la mesa estan las cartas:\n");
	MostrarCarta(carta01); MostrarCarta(carta02); MostrarCarta(carta03);
}else;
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
		i++;
	return n;
}
void MostrarCarta(carta n){
	printf ("|%d %s|",n.num,n.palo.c_str());
}
