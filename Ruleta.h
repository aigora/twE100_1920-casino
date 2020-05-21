
char presentacion(void);
void espera(int segundos);
int ApuestaR(void);
char repetirR;
void Ruleta(void);
void Ruleta (void)
{
 char c;
 int n=0,i,premio,k=4, apuestaR;
printf ("\t\t\t\t\tBienvenido a la ruleta.\n\n");
do{
c=presentacion ();
 
switch (c) {
 case 'A' :
 case 'a':
 do {
 	apuestaR= ApuestaR();
 printf ("1. Apostar a los pares \n"); 
 printf ("2. Apostar a los impares\n");
 scanf ("%d",&n);}while(n!=1 && n!=2);
 fflush(stdin);
 break;
 
case 'B' :
case 'b':
 do {
 	apuestaR= ApuestaR();
 printf ("1. Apostar a la primera columna \t (1,4,7,10,13,16,19,22,25,28,31,34)\n");
 printf ("2. Apostar a la segunda columna \t (2,5,8,11,14,17,20,23,26,29,32,35)\n");
 printf ("3. Apostar a la tercera columna \t (3,6,9,12,15,18,21,24,27,30,33,36)\n");
 scanf ("%d",&n);}while(n!=1 && n!=2 && n!=3);
 fflush(stdin);
 break;
 
case 'C' :
case 'c':
 do {
 	apuestaR= ApuestaR();
	printf ("1. Apostar falta \t (1-18)\n");
 	printf ("2. Apostar pasa \t (19-36)\n");
	scanf ("%d",&n);
	fflush(stdin);
 }
 while(n!=1 && n!=2);
 break;
 case 'D':
 case 'd':
  do{
  	apuestaR= ApuestaR();
  	printf ("1. Apostar a la primera docena \t (1,2,3,4,5,6,7,8,9,10,11,12)\n");
 	printf ("2. Apostar a la segunda docena \t (13,14,15,16,17,18,19,20,21,22,23,24)\n");
 	printf ("3. Apostar a la tercera docena \t (25,26,27,28,29,30,31,32,33,34,35,36)\n");
 	scanf ("%d",&n);
 	fflush(stdin);
  }while(n!=1 && n!=2 && n!=3);
break;
 
case 'E' :
case 'e':
 do {
 	apuestaR= ApuestaR();
 printf ("Elija el n\243mero al que desea apostar \n");
 scanf ("%d",&n);
 fflush(stdin);
 }
 while(n<=0 || n>36); break;
 }
 
system("cls");
 
printf ("\nEl n\243mero que ha salido en la ruleta es:\n\n");
 
for(i=1;i<=100;i++) rand();  
premio = rand() % 37;       
 
espera (k);  
 
system("cls");
 
printf ("\nEl n\243mero que ha salido en la ruleta es:\n\n");
 
printf ("\t%d\n\n",premio);
 
if (premio==0) {
 printf ("Gana la banca!");
	break;}
 
switch ( c ) {
 case 'A' :
 case 'a':
 if ((n==1 && premio%2 == 0) || (n==2 && premio%2 == 1)){
 printf ("Enhorabuena, has ganado \n");
 fichas= fichas+ apuestaR*2;
 MostrarFichas(fichas);
 }
 else{
  printf ("Lo siento, has perdido \n");
  fichas= RestarFichas(fichas, apuestaR);
  MostrarFichas(fichas);}
 break;
 
case 'B' :
case 'b':
 if ((n==1 && premio%3 == 1) || (n==2 && premio%3 == 2) || (n==3 && premio%2 == 0)){
 printf ("Enhorabuena, has ganado \n");
  fichas= fichas+ apuestaR*3;
   MostrarFichas(fichas);
 }
 else{
 printf ("Lo siento, has perdido \n");
 fichas= RestarFichas(fichas, apuestaR);
 MostrarFichas(fichas);}
 break;
 
case 'C' :
case 'c':
 if ((n==1 && premio-19<0) || (n==2 && premio-19>0)){
 printf ("Enhorabuena, has ganado \n");
  fichas= fichas+ apuestaR*2;
   MostrarFichas(fichas);}
 else{
 printf ("Lo siento, has perdido \n");
 fichas= RestarFichas(fichas, apuestaR);
 MostrarFichas(fichas);}
 break;
 
case 'D' :
case 'd':
 if ((n==1 && premio-12<=0) || (n==2 && premio-12>0 && premio-12<=12) || (n==3 && premio-12>12)){
 printf ("Enhorabuena, has ganado\n");
 fichas= fichas+ apuestaR*3;
  MostrarFichas(fichas);}
 else{ 
 printf ("Lo siento, has perdido \n");
 fichas= RestarFichas(fichas, apuestaR);
 MostrarFichas(fichas);}
 break;
case 'E' :
case 'e':
 if (n==premio){
 printf ("Enhorabuena, has ganado\n");
 fichas= fichas+ apuestaR*36;
  MostrarFichas(fichas);}
 else{
 printf ("Lo siento, has perdido \n");
 fichas= RestarFichas(fichas, apuestaR);
 MostrarFichas(fichas);}
 break;
 
}printf("\n\250Desea jugar otra ronda?\n");
scanf("%c", &repetirR);
fflush(stdin);
system("cls");
}while (repetirR == 's' || repetirR == 'S');

}

 
char presentacion(void){
 char c;
do {
printf ("\250Qu\202 apuesta quieres realizar?\n");
 
printf ("A. Apostar pares o impares \n");
printf ("B. Apostar columnas \n");
printf ("C. Apostar falta o pasa \n");
printf ("D. Apostar docenas\n");
printf ("E- Apostar n\243mero\n");

scanf ("%c",&c);
fflush (stdin);
 
system("cls"); } while (c!='A' && c!='a' && c!='B' && c!='b' && c!='C' && c!='c' && c!='D' && c!='d' && c!='E' && c!='e');
 return c;
}
 
void espera(int segundos)
{
  
 int Seg1,Seg2;
 Seg1=(int)clock()/CLOCKS_PER_SEC;
 Seg2=Seg1;
 while((Seg2-Seg1) < segundos){
 if(clock()%400<10){
 system("cls");
 printf ("\nEl n\243mero que ha salido en la ruleta es:\n\n\t%d",rand() % 37);
 }
 Seg2=(int)clock()/CLOCKS_PER_SEC;
 }
} 

int ApuestaR(void){
	int x;
	do{
	printf("\250Cu\240ntas fichas quieres apostar?\n");
	scanf("%d", &x);
	fflush(stdin);
	if(x > fichas){
		printf("No dispone de tantas fichas\n");
		MostrarFichas(fichas);
	}
	}while (x > fichas);
	return x;
}
