typedef struct{
	int num;
	std::string palo;
	int ok;
} carta;


carta SeleccionCarta (void);
carta SeleccionCarta (void){
	carta carta;
	carta.ok= rand() % 4+1;
	carta.num= rand () % 12+1;
	if(carta.ok==1){
		carta.palo="picas";
	}
	else if(carta.ok==2){
		carta.palo="corazones";
	}
	else if (carta.ok==3){
		carta.palo="treboles";
	}
	else{
		carta.palo="diamantes";
	}
	return carta;
	
}


