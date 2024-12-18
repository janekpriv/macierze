#include "gauss.h"
#include "stdio.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
    
	int rows = mat->r;
	int columns = mat->c;
	int diagonal = 0; // mierzy przekatna maciezy (pomijamy komorki w ktorych dokonalismy redukcji)


	int reduced_rows; // obsluga maciezy nie kwadratowych 
	if (rows>columns){
		reduced_rows = columns;
	}else{
		reduced_rows = rows;
	}
	for(int k=0; k<reduced_rows; k++){
		for(int i=1; i<rows; i++){
			if (mat->data[i][diagonal] == 0){
				fprintf(stderr, "macierz osobliwa, dzielenie przez zero" );
				return 1
			}
			double multiplier = mat->data[i-1][diagonal]/mat->data[i][diagonal];
			for(int j=0; j<columns; j++){
				mat->data[i][j] = mat->data[i][j] * multiplier;
				mat->data[i][diagonal + j]-=mat->data[i-1][diagonal +j]; //odejmujemy wartosc z wiersza wyzej 
			}
		}
		diagonal++;
	}
		return 0;
}

