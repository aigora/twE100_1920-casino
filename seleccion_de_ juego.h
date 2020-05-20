void Presentacion (void);
void Presentacion (void){
	puts ("Bienvenido al casino virtual de la ETSIDI\n Qu\202dese el tiempo y disfrute.");
}
char opcion (void);
char opcion (void) {
	char letra;
	puts ("Elija el juego al que quiere jugar");
	puts ("A. Ruleta");
	puts ("B. Poker (Texas Hold'em)");
	puts ("C. BlackJack");
	scanf ("%c", &letra);
	fflush (stdin);
	return letra;}
	
char repeticion (void);
char repeticion (void){
	char tecla;
	puts ("\n\n\250Desea jugar a otra cosa\77");
	scanf ("%c", &tecla);
	fflush (stdin);
	system("cls");
	return tecla;
}

void cerrar (void);
void cerrar (void)
{
	puts ("\n\nPulse \256retorno de carro\257 para cerrar la ventana...");
	getchar ();
}
