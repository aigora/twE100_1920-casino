int apostadas;
int jB=0, iB, kB=0, lB=0;
carta barajaB[2000];
int Suma, SumaC;
char repetir, repetirJ;
void ComprobacionB(carta n);
carta SacarCartaB(carta n);
bool igualesB= true;

void BlackBJack(void);
void BlackJack(void){
	printf ("\t\t\t\t\tBienvenido a la mesa de BlackBjack.\n------------------------------------------------------------------------------------------------------------------------\n Jugara contra la casa.\n Para darle ventaja empezar\240 usted apostando y la casa siempre aceptar\240\n------------------------------------------------------------------------------------------------------------------------\n");
	MostrarFichas(fichas);
do{ 
	jB=iB;
	Suma = 0; SumaC = 0; apostadas =0;
	jB=0, kB=0, lB=0;
	do {
	printf("\250Cu\240ntas fichas desea apostar?\n");
	scanf ("%d", &apostadas);
	fflush (stdin);
	system("cls");
	if(apostadas > fichas){
		printf(" No dispone de tantas fichas\n");
		MostrarFichas(fichas);
	}
	}while (apostadas > fichas);
	printf ("La primera carta es: ");
	
	
	

do
	{	repetir = 'no';
		barajaB[iB] = SacarCarta (barajaB[iB]);
		MostrarCarta(barajaB[iB]);
		if (barajaB[iB].num <10 && barajaB[iB].num != 1){
		Suma = Suma + barajaB[iB].num;
		}else Suma = Suma+10;
		printf ("\nEl valor de sus cartas es:\n %d\n\n", Suma);
		iB++;
		if (Suma <= 21){
		OtraCarta: printf ("\n\n\n\250Desea recibir otra carta?\n");
		scanf ("%c", &repetir);
		fflush (stdin);
		system("cls");
		}else {
			for (kB=0; kB <= iB; kB++){
				if(barajaB[lB].num == 1){
				Suma= Suma-9;
				lB++;
				printf("\nSe ha pasado de 21, su as pasa a valer 1.");
				printf ("\nEl valor de sus cartas es:\n %d\n", Suma);
				goto OtraCarta;
				}else lB++;
			}
			repetir == 'no';
		}
	} while (repetir == 's' || repetir == 'S');
	do{ lB= iB;
		barajaB [iB] = SacarCarta (barajaB[iB]);
		MostrarCarta(barajaB[iB]);
		if (barajaB[iB].num <10 && barajaB[iB].num !=1){
			SumaC = SumaC + barajaB[iB].num;
		}else SumaC = SumaC + 10;
		printf("\nEl valor de las cartas del Crupier es:\n %d", SumaC);
		i++;
		if (SumaC > 21){
			for (kB=0; kB<=iB; kB++){
				if (barajaB[lB].num ==1){
					SumaC = SumaC - 9;
					lB++;
					printf ("\nLa suma del Crupier se pasa de 21, su as pasa a valer 1.");
					printf ("\nEl valor de las cartas del Crupier es:\n %d", SumaC);
					break;
				}else lB++;
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
if(fichas>0){

printf("\n\250Desea jugar otra ronda?\n");
scanf("%c", &repetirJ);
fflush(stdin);
system("cls");
}else{
 repetirJ = false;
	system("cls");}
}while (repetirJ == 's' || repetirJ == 'S');
}


void ComprobacionB(carta n){
	baraja[iB] = n;
	for (jB; jB <= iB; jB++){
		if(n.num == barajaB[jB].num && n.ok == baraja[jB].ok && iB!= jB) {
		igualesB = true;
		break;}
		else{
		igualesB = false;
	}
}}

carta SacarCartaB(carta n){
	do{
		n= SeleccionCarta();
		Comprobacion(n);}while(igualesB == true);
	return n;
}






