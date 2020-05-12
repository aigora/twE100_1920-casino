#include <stdio.h>
#include <string>
#include<stdlib.h>
#include<time.h>
#define f 10
typedef struct{
	int num;
	std::string palo;
	int ok;
} carta;
int main(){
	carta carta1;
	srand (time (NULL));
	carta1.ok= rand() % 4+1;
	carta1.num= rand () % 12+1;
	if(carta1.ok==1){
		carta1.palo="picas";
	}
	else if(carta1.ok==2){
		carta1.palo="corazones";
	}
	else if (carta1.ok==3){
		carta1.palo="treboles";
	}
	else{
		carta1.palo="diamantes";
	}
	printf ("%d %s",carta1.num,carta1.palo.c_str());
	
}
