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
#include "Ruleta.h"

int main(){
srand (time (NULL));
char rep,juego;
	do{
	
SeguirJugando:	juego= opcion();
	
		switch (juego)
		{
			case 'A':
			case 'a':
				system("cls");
				Ruleta();
				break;
				
			case 'B':
			case 'b':
				system("cls");
				Poker();
				break;
				
			case 'C':
			case 'c':
				system("cls");
				BlackJack();
				break;	
			default:
				puts ("Me temo que aqu\241 no tenemos esa opci\242n se\244or...");
}
	rep = repeticion ();
	} while (rep == 's' || rep == 'S');
	if(fichas>500){
		printf("\t\t\t\t\t\tENHORABUENA\n\n Ha ganado usted %d fichas", fichas-500);
	}else{
		printf("\t\t\t\t\t\t¿ESTA SEGURO?\n\n Ha perdido usted %d fichas\n ¿Quiere seguir jugando?\n", 500-fichas);
		scanf("%c", &rep);
		fflush(stdin);
		if(rep == 's' || rep == 'S'){
			system("cls");
			goto SeguirJugando;
		}else printf("\n Vuelva cuando quiera");
	}
	cerrar ();
	return 101;
}


