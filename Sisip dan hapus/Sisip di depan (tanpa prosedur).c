#include <stdio.h>
#include <stdlib.h>

void main (void)

//KAMUS
{	int A[14] = {0, -43, -30, -15, -9, -1, 27, 33, 49, 55, 60, 98, -9999, 0, 0};
	int i, j, indeksakhir;
//ALGORITMA	
	i = 1;
	while (A[i]!=-9999)
	{
		i = i + 1;
	}
	//A[i] == -9999
	indeksakhir = i;
	
	while (indeksakhir >=1 )
	{
		A[indeksakhir+1] = A[indeksakhir];
		indeksakhir = indeksakhir - 1;
	}
	
	A[1] = -50;
	for (j = 1;j<=13; j++)
	{
		printf ("A[%d] = %d\n",j, A[j]);
	}	

	system ("PAUSE");
}


