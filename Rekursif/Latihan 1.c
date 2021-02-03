#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**************************
Program Pbb
Deskripsi : Mencari nilai Pbb dari suatu bilangan
IS : Bilangan sudah diinput dari user
FS : Hasil perhitungan Pbb didapatkan

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 8 July 2019
**************************/

//header Function
int PBB (int x, int y);

void main (void)
//KAMUS
{	int hasil, x, y;
	printf ("***********\n");
	printf ("Program PBB\n");
	printf ("***********\n");
	printf ("Masukkan nilai x : ");
	scanf ("%d", &x);
	printf ("Masukkan nilai y : ");
	scanf ("%d", &y);
	
	hasil = PBB (x,y);
	
	printf ("Hasil PBB adalah %d\n", hasil);
	system ("PAUSE");
}

int PBB (int x, int y)
{
	if (y==0)
	{
		return x; //basis
	}
	else
	{
		return PBB(y, x%y); //rekurens
	}
}
