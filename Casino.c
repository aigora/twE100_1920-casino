#include <stdio.h>
#include "seleccion_de_ juego.h"
#include "Ruleta.h"
#include "Tragaperras.h"
#include "BlackJack.h"
#include "Poker.h"
int main(){
char rep,juego;

	Presentacion();
	
	do{
	
	juego= opcion();
	
		switch (juego)
		{
			case 'A':
			case 'a':
			puts ("jaja");		
				break;
				
			case 'B':
			case 'b':
				break;
				
			case 'C':
			case 'c':
				break;
				
			case 'D':
			case 'd':
				break;	
			default:
				puts ("Me temo que aqu\241 no tenemos esa opci\242n se\244or...");
}
	rep = repeticion ();
	} while (rep == 's' || rep == 'S');

	cerrar ();
	return 0;
}


