int fichas= 500;

int RestarFichas (int fichas, int resta);
int RestarFichas (int fichas, int resta){
	int total;
	total= fichas-resta;
	return total; 
}

int SumarFichas (int fichas, int suma);
int SumarFichas (int fichas, int suma){
	int total;
	total= fichas+suma;
	return total;
}

void MostrarFichas(int fichas);
void MostrarFichas(int fichas){
	printf("\n\nAhora mismo tienes %d fichas\n\n", fichas);
}

