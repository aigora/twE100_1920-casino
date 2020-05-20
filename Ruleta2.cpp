#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define DIM 20
 
char presentacion();
 
void espera(int segundos);
 
int main ()
{
 char c;
 int n=0,i,premio,k=4;
 
srand(time(NULL));
 
c=presentacion ();
 
switch (c) {
 case 'A' :
 case 'a':
 do {
 printf ("1. Apostar a los pares \n"); 
 printf ("2. Apostar a los impares\n");
 scanf ("%d",&n);}while(n!=1 && n!=2);
 break;
 
case 'B' :
case 'b':
 do {
 printf ("1. Apostar a la primera columna \t (1,4,7,10,13,16,19,22,25,28,31,34)\n");
 printf ("2. Apostar a la segunda columna \t (2,5,8,11,14,17,20,23,26,29,32,35)\n");
 printf ("3. Apostar a la tercera columna \t (3,6,9,12,15,18,21,24,27,30,33,36)\n");
 scanf ("%d",&n);}while(n!=1 && n!=2 && n!=3);
 break;
 
case 'C' :
case 'c':
 do {
	printf ("1. Apostar falta \t (1-18)\n");
 	printf ("2. Apostar pasa \t (19-36)\n");
	scanf ("%d",&n);
 }
 while(n!=1 && n!=2);
 break;
 case 'D':
 case 'd':
  do{
  	printf ("1. Apostar a la primera docena \t (1,2,3,4,5,6,7,8,9,10,11,12)\n");
 	printf ("2. Apostar a la segunda docena \t (13,14,15,16,17,18,19,20,21,22,23,24)\n");
 	printf ("3. Apostar a la tercera docena \t (25,26,27,28,29,30,31,32,33,34,35,36)\n");
 	scanf ("%d",&n);
  }while(n!=1 && n!=2 && n!=3);
break;
 
case 'E' :
case 'e':
 do {
 printf ("Elija el numero al que desea apostar \n");
 
scanf ("%d",&n);
 }
 while(n<=0 || n>36); break;
 }
 
system("cls");
 
printf ("\nEl numero que ha salido en la ruleta es:\n\n");
 
for(i=1;i<=100;i++) rand();  
premio = rand() % 37;       
 
espera (k);  
 
system("cls");
 
printf ("\nEl numero que ha salido en la ruleta es:\n\n");
 
printf ("\t%d\n\n",premio);
 
if (premio==0) {
 printf ("Gana la banca!");
 system ("pause");
 return 0;}
 
switch ( c ) {
 case 'A' :
 case 'a':
 if ((n==1 && premio%2 == 0) || (n==2 && premio%2 == 1))
 printf ("Enhorabuena, has ganado \n");
 else printf ("Lo siento, has perdido \n");
 break;
 
case 'B' :
case 'b':
 if ((n==1 && premio%3 == 1) || (n==2 && premio%3 == 2) || (n==3 && premio%2 == 0))
 printf ("Enhorabuena, has ganado \n");
 else printf ("Lo siento, has perdido \n");
 break;
 
case 'C' :
case 'c':
 if ((n==1 && premio%2 == 0) || (n==2 && premio%2 == 1))
 printf ("Enhorabuena, has ganado \n");
 else printf ("Lo siento, has perdido \n");
 break;
 
case 'D' :
case 'd':
 if ((n==1 && premio%3 == 1) || (n==2 && premio%3 == 2) || (n==3 && premio%2 == 0))
 printf ("Enhorabuena, has ganado\n");
 else printf ("Lo siento, has perdido \n");
 break;
case 'E' :
case 'e':
 if (n==premio)
 printf ("Enhorabuena, has ganado\n");
 else printf ("Lo siento, has perdido \n");
 break;
 
}
 system ("pause");
 return 0;
}
 
char presentacion()
 
{
 char c;
do {
 
printf ("Bienvenido a la ruleta.\n\n");
 
printf ("¿Que apuesta quieres realizar?\n");
 
printf ("A. Apostar pares o impares \n");
printf ("B. Apostar columnas \n");
printf ("C. Apostar falta o pasa \n");
printf ("D. Apostar docenas\n");
printf ("E- Apostar numero\n");

scanf ("%c",&c);
 
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
 printf ("\nEl numero que ha salido en la ruleta es:\n\n\t%d",rand() % 37);
 }
 Seg2=(int)clock()/CLOCKS_PER_SEC;
 }
} 
