carta baraja[10];
int i=0, j=0, apuesta=0;
void Comprobacion(carta n);
carta SacarCarta(carta n);
void MostrarCarta(carta n);
int Apostar(void);
bool iguales= true;
char jugar, apostar;

void Poker(void);
void Poker(void){
	srand (time (NULL));
	carta carta01, carta02, carta03, carta04, carta05, carta11, carta12, carta21, carta22;
	
	printf ("\n\n-------------------------------\n-------------------------------\nBienvenido a la mesa de poker.\n Jugara contra la casa.\n Para darle ventaja empezará usted las apuestas y la casa siempre aceptará\n");
	MostrarFichas(fichas);
	printf("La ciega son 50 fichas. ¿Aceptas?\n");
	scanf ("%c", &jugar);
	fflush(stdin);
	if(jugar == 'S' || jugar == 's'){
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
	printf ("\n\nTu mano:\n--------------------------------\n");
	MostrarCarta(carta11); MostrarCarta(carta12);
	
	apuesta = Apostar()+50;
	if(apostar == 's' || apostar == 'S'){
		printf ("\n\nSe muestra la siguiente carta");
		printf ("\n\nSobre la mesa estan las cartas:\n");
		MostrarCarta(carta01); MostrarCarta(carta02); MostrarCarta(carta03); MostrarCarta(carta04);
		printf ("\n\nTu mano:\n--------------------------------\n");
		MostrarCarta(carta11); MostrarCarta(carta12);
		apuesta = apuesta+Apostar();
		if(apostar == 's' || apostar == 'S'){
			printf ("\n\nSe muestra la siguiente carta");
			printf ("\n\nSobre la mesa estan las cartas:\n");
			MostrarCarta(carta01); MostrarCarta(carta02); MostrarCarta(carta03); MostrarCarta(carta04); MostrarCarta(carta05);
			printf ("\n\nTu mano:\n--------------------------------\n");
			MostrarCarta(carta11); MostrarCarta(carta12);
			apuesta = apuesta+Apostar();
		}else{
		fichas= RestarFichas(fichas, apuesta);
		MostrarFichas(fichas);}
	}else{
	fichas= RestarFichas(fichas, apuesta);
	MostrarFichas(fichas);}
}else ;
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

int Apostar (void){
	int x;
	printf("\n\n¿Quieres apostar?");
	scanf ("%c", &apostar);
	fflush(stdin);
	if(apostar == 's' || apostar == 'S'){
		printf("¿Cuanto apuestas?");
		scanf ("%d", &x);
		fflush(stdin);
	}else{ printf ("Te retiras de la ronda");
	} 
	return x;
}
