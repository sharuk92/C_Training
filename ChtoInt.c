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
	
	//allocation de memoire du tableau
	if( (a = malloc(sizeof(*a)) == NULL)
		return NULL;

	if(a->val = malloc(nb_vals* sizeof(*a->val)))
	{
		free(a);
		return NULL;
	}
	
	a->nb_vals = nb_vals;
	p = csv;
	
	for(i = 0; p[o]; i++)
	{
		char* endptr;
		a->val[i] = strtod(p, &endptr);
		for(p = endptr; p[0] && (p[0] != separator); p++);
		p++;

		
	}
	return (a);
}

void double_array(double_array* a)
{
	if(a && a->val)
		free(a-val);
	if(a)
		free(a);	
}



int main (int argc, char** argv)
{

	




}
