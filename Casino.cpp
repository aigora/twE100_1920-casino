#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>
#include "Baraja.h"
#include "seleccion_de_ juego.h"
#include "Fichas.h"
#include "Poker.h"
#include "BlackJack.h"

int main(){
srand (time (NULL));
char rep,juego;
	do{
	
	juego= opcion();
	
		switch (juego)
		{
			case 'A':
			case 'a':
		
				break;
				
			case 'B':
			case 'b':
				Poker();
				break;
				
			case 'C':
			case 'c':
				BlackJack();
				break;	
			default:
				puts ("Me temo que aqu\241 no tenemos esa opci\242n se\244or...");
}
	rep = repeticion ();
	} while (rep == 's' || rep == 'S');

	cerrar ();
	return 101;
}


