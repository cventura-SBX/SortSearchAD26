#include "SortingA.h"


//https://www.youtube.com/watch?v=Vgd_aZT_BWA
void SortingA::burbuja(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place  
		for (j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
}

//https://www.youtube.com/watch?v=wnKQsow7ERI
void SortingA::ordSeleccion(int a[], int n)
{
	int indiceMenor, i, j;
	int aux;
	for (i = 0; i < n - 1; i++) // ordenar a[0]..a[n-2] y a[n-1] en cada pasada
	{
		indiceMenor = i; // comienzo de la exploración en índice i
		for (j = i + 1; j < n; j++) // j explora la sublista a[i+1]..a[n-1]
			if (a[j] < a[indiceMenor])
				indiceMenor = j;
		if (i != indiceMenor) // sitúa el elemento mas pequeño en a[i]
		{
			aux = a[i];
			a[i] = a[indiceMenor];
			a[indiceMenor] = aux;
		}
	}
}


void SortingA::swap(int* val1, int* val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}