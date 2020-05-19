carta baraja[10];
int i=0, j=0, apuesta=0;
void Comprobacion(carta n);
carta SacarCarta(carta n);
void MostrarCarta(carta n);
void MostrarMano(carta n, carta m);
void FinDeRonda(carta q, carta w, carta e, carta r, carta t, carta y, carta u, carta i, carta o);
int ComprobarValor(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int ComprobarPareja(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarDP(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarTrio(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarFull(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarPoker(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarColor(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarEsc(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarEsCo(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int	ComprobarEsR(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
bool Esc(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
bool EscR(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int CartaAP(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int CartaAE(carta q, carta w, carta e, carta r, carta t, carta y, carta u);
int CartaA(carta q, carta w);
int CartaB(carta q, carta w);
int Apostar(void);
bool iguales= true;
char jugar, apostar, repetirP;

void Poker(void);
void Poker(void){
	srand (time (NULL));
	carta carta01, carta02, carta03, carta04, carta05, carta11, carta12, carta21, carta22;
	printf ("Bienvenido a la mesa de poker.\n Jugara contra la casa.\n Para darle ventaja empezará usted las apuestas y la casa siempre aceptará\n");
	MostrarFichas(fichas);
do{	printf("La ciega son 50 fichas. ¿Aceptas?\n");
	scanf ("%c", &jugar);
	fflush(stdin);
	if(jugar == 'S' || jugar == 's'){
		apuesta = 50;
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
	MostrarMano(carta11, carta12);
	apuesta = apuesta+Apostar();
	if(apostar == 's' || apostar == 'S'){
		printf ("\n\nSe muestra la siguiente carta");
		printf ("\n\nSobre la mesa estan las cartas:\n");
		MostrarCarta(carta01); MostrarCarta(carta02); MostrarCarta(carta03); MostrarCarta(carta04);
		MostrarMano(carta11, carta12);
		apuesta = apuesta+Apostar();
		if(apostar == 's' || apostar == 'S'){
			printf ("\n\nSe muestra la siguiente carta");
			printf ("\n\nSobre la mesa estan las cartas:\n");
			MostrarCarta(carta01); MostrarCarta(carta02); MostrarCarta(carta03); MostrarCarta(carta04); MostrarCarta(carta05);
			MostrarMano(carta11,carta12);
			apuesta = apuesta+Apostar();
			if(apostar == 's' || apostar == 'S'){
			
			FinDeRonda(carta11, carta12, carta21, carta22, carta01, carta02, carta03, carta04, carta05);}
			else{
			fichas= RestarFichas(fichas, apuesta);
			MostrarFichas(fichas);}
			}
		}else{
		fichas= RestarFichas(fichas, apuesta);
		MostrarFichas(fichas);}
	}else{
	fichas= RestarFichas(fichas, apuesta);
	MostrarFichas(fichas);}
	if(fichas>0){
printf("\n¿Desea jugar otra ronda?\n");
scanf("%c", &repetirP);
fflush(stdin);}else repetirP = false;
	}while (repetirP == 's' || repetirP == 'S');
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
	do {if(apostar == 's' || apostar == 'S'){
		x=0;
		printf("¿Cuanto apuestas?");
		scanf ("%d", &x);
		if (x > fichas-apuesta){
			printf("\nNo tienes tantas fichas");
			MostrarFichas(fichas-apuesta);
		}
		fflush(stdin);
	}else{ printf ("Te retiras de la ronda");
	}}while (x > fichas-apuesta) ;
	return x;
}

void MostrarMano(carta n, carta m){
	printf ("\n\nTu mano:\n--------------------------------\n");
	MostrarCarta(n); MostrarCarta(m);
	printf("\n--------------------------------");
}



void FinDeRonda(carta q, carta w, carta e, carta r, carta t, carta y, carta u, carta i, carta o){
	int v, c;
	printf ("\n\n\n\nSobre la mesa estan las cartas:\n");
	MostrarCarta(t); MostrarCarta(y); MostrarCarta(u); MostrarCarta(i); MostrarCarta(o);
	MostrarMano(q, w);
	printf ("\n\nLa mano de la casa es:\n--------------------------------\n");
	MostrarCarta(e); MostrarCarta(r);
	printf("\n--------------------------------");
	v = ComprobarValor(q, w, t, y, u, i, o);
	c = ComprobarValor(e, r, t, y, u, i, o);
	printf("\n%d %d", v, c);
	if(v>c){
		printf("\n\nEnhorabuena, ha ganado");
		fichas= SumarFichas(fichas,apuesta);
		MostrarFichas(fichas);
	}
	else if(v==c){
		if(v>1 && v<9 && v != 5){
			v = CartaAP(q, w, t, y, u, i, o);
			c = CartaAP(e, r, t, y, u, i, o);
			if(v>c){
			printf("\n\nEnhorabuena, ha ganado");
			fichas= SumarFichas(fichas,apuesta);
			MostrarFichas(fichas);
			}
			else{
			printf("\n\nLo siento, has perdido.");
			fichas= RestarFichas(fichas, apuesta);
			MostrarFichas(fichas);
			}
		}
		else if(v>=9 || v==5){
			v = CartaAE(q, w, t, y, u, i, o);
			c = CartaAE(e, r, t, y, u, i, o);
			if(v>c){
			printf("\n\nEnhorabuena, ha ganado");
			fichas= SumarFichas(fichas,apuesta);
			MostrarFichas(fichas);
			}
			else{
			printf("\n\nLo siento, has perdido.");
			fichas= RestarFichas(fichas, apuesta);
			MostrarFichas(fichas);
			}
		}
		else{
			v = CartaA(q, w);
			c = CartaA(e, r);
			if(v>c){
			printf("\n\nEnhorabuena, ha ganado");
			fichas= SumarFichas(fichas,apuesta);
			MostrarFichas(fichas);
			}
			else if(v<c){
			printf("\n\nLo siento, has perdido.");
			fichas= RestarFichas(fichas, apuesta);
			MostrarFichas(fichas);
			}
			else{
			v = CartaB(q, w);
			c = CartaB(e, r);
			if(v>c){
			printf("\n\nEnhorabuena, ha ganado");
			fichas= SumarFichas(fichas,apuesta);
			MostrarFichas(fichas);
			}
			else if(v<c){
			printf("\n\nLo siento, has perdido.");
			fichas= RestarFichas(fichas, apuesta);
			MostrarFichas(fichas);
			}
			}
		}
		
	}
	else{
	printf("\n\nLo siento, has perdido.");
	fichas= RestarFichas(fichas, apuesta);
	MostrarFichas(fichas);
	}}

int ComprobarValor(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int v=1;
	
	if (ComprobarPareja(q, w, e, r, t, y, u)>v) v=ComprobarPareja(q, w, e, r, t, y, u);
	if (ComprobarTrio(q, w, e, r, t, y, u)>v) v=ComprobarTrio(q, w, e, r, t, y, u);
	if (ComprobarDP(q, w, e, r, t, y, u)>v) v=ComprobarDP(q, w, e, r, t, y, u);
	if (ComprobarFull(q, w, e, r, t, y, u)>v) v=ComprobarFull(q, w, e, r, t, y, u);
	if (ComprobarPoker(q, w, e, r, t, y, u)>v) v=ComprobarPoker(q, w, e, r, t, y, u);
	if (ComprobarColor(q, w, e, r, t, y, u)>v) v=ComprobarColor(q, w, e, r, t, y, u);
	if (ComprobarEsc(q, w, e, r, t, y, u)>v) v=ComprobarEsc(q, w, e, r, t, y, u);
	if (ComprobarEsCo(q, w, e, r, t, y, u)>v) v=ComprobarEsCo(q, w, e, r, t, y, u);
	if (ComprobarEsR(q, w, e, r, t, y, u)>v) v=ComprobarEsR(q, w, e, r, t, y, u);
	return v;
}

int ComprobarPareja(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].num == jugada[p].num && k != p){
				c++;
				pareja =true;
			}else if (c > 2){
				pareja = false;
				break;
			}else;
		}
	}
	if (pareja == true) return 2;
	else return 0;
}
int ComprobarDP(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].num == jugada[p].num && k != p){
				c++;
			}else if (c > 2 && c < 4){
				pareja = true;
			}else if (c > 4){
				pareja = false;
				break;
			}else NULL;
		}
	}
	if (pareja == true) return 3;
	else return 0;
}

int ComprobarTrio(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].num == jugada[p].num && k != p){
				c++;
			}else if (c > 4 && c < 6){
				pareja = true;
			}
			else if (c > 6){
				pareja = false;
				break;
			}else NULL;
		}
	}
	if (pareja == true) return 4;
	else return 0;
}

int ComprobarFull(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].num == jugada[p].num && k != p){
				c++;
			}else if (c > 6 && c < 8){
				pareja = true;
			}
			else if (c > 8){
				pareja = false;
				break;
			}else NULL;
		}
	}
	if (pareja == true) return 7;
	else return 0;
}

int ComprobarPoker(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].num == jugada[p].num && k != p){
				c++;
			}else if(c > 8 && c < 12){
				pareja = true;
				break;
			}else NULL;
		}
	}
	if (pareja == true) return 8;
	else return 0;
}

int ComprobarColor(carta q, carta w, carta e, carta r, carta t, carta y, carta u){int k, p, c=0;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<=7; k++){
		for(p=0; p<=7; p++){
			if(jugada[k].ok == jugada[p].ok && k != p){
				c++;
			}else if (c >= 20){
				pareja = true;
				break;
			}else NULL;
		}
	}
	if (pareja == true) return 6;
	else return 0;
}

int ComprobarEsc(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0;
	bool escalera = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	escalera= Esc(q, w, e, r, t, y, u);
	
	if (escalera == true) return 5;
	else return 0;
}

int ComprobarEsCo(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0, color;
	bool escalera = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	escalera= Esc(q, w, e, r, t, y, u);
	color= ComprobarColor(q, w, e, r, t, y, u);
	if (escalera == true && color == 6) return 9;
	else return 0;
}

int ComprobarEsR(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, c=0, color;
	bool pareja = false;
	carta jugada[8];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	pareja= EscR(q, w, e, r, t, y, u);
	color= ComprobarColor(q, w, e, r, t, y, u);
	if (pareja == true && color == 6) return 10;
	else return 0;
}

bool Esc(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, g, h, l;
	carta jugada[7];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<7; k++){
	for(p=0; p<7; p++){
			if(jugada[k].num == jugada[p].num-1){
	for(g=0; g< 7; g++){
			if(jugada[p].num == jugada[g].num-1){
	for(h=0; h< 7; h++){
			if(jugada[g].num == jugada[h].num-1){
	for(l=0; l< 7; l++){
			if(jugada[h].num == jugada[l].num-1){
					return true;
					break;
									}else ;
								}
							}else ;
						}
					}else ;
				}


}else return false;
}}}

bool EscR(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k, p, g, h, l;
	carta jugada[7];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<7; k++){
		if(jugada[k].num == 10){
	for(p=0; p<7; p++){
			if(jugada[k].num == jugada[p].num-1){
	for(g=0; g< 7; g++){
			if(jugada[p].num == jugada[g].num-1){
	for(h=0; h< 7; h++){
			if(jugada[g].num == jugada[h].num-1){
	for(l=0; l< 7; l++){
			if(jugada[l].num == 1){
					return true;
					break;
									}else;
								}
							}else;
						}
					}else;
					
				}


}else;
}}else return false;
}}

int CartaAP(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int k;
	bool imp;
	carta jugada[7];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(k=0; k<7; k++){
		if(q.num==jugada[k].num){imp = true; break;
		} 
		else if(w.num==jugada[k].num) imp = false;
	}
	if (imp == true) return q.num;
	else return w.num;
}

int CartaAE(carta q, carta w, carta e, carta r, carta t, carta y, carta u){
	int p, g, h, l;
	carta jugada[7];
	jugada[0] = q;
	jugada[1] = w;
	jugada[2] = e;
	jugada[3] = r;
	jugada[4] = t;
	jugada[5] = y;
	jugada[6] = u;
	
	for(p=0; p<7; p++){
			if(q.num == jugada[p].num-1){
	for(g=0; g< 7; g++){
			if(jugada[p].num == jugada[g].num-1){
	for(h=0; h< 7; h++){
			if(jugada[g].num == jugada[h].num-1){
	for(l=0; l< 7; l++){
			if(jugada[h].num == jugada[l].num-1){
					return q.num;
					break;
									}else ;
								}
							}else ;
						}
					}else ;
				}


}else return w.num;
}}

int CartaA(carta q, carta w){
	if(q.num > w.num) return q.num;
	else return w.num;
}

int CartaB(carta q, carta w){
	if(q.num < w.num) return q.num;
	else return w.num;
}
