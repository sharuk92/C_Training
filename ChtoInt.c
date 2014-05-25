#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	double* val;
	int nbVal;
}double_array;

double_array* getValuesFromCsv(char* csv, char separator)
{
	double_array* a;
	int nb_vals = 1;
	int i;
	char* p;
	
	if(NULL == csv)
		return NULL;

	// Compte de valeurs.

	for(i = 0; csv[i]; i++)
	{
		if(csv[i] == separator;
		nb_vals++;
	}
	
	


}
