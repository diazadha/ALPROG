#include <stdio.h>
#include <stdlib.h>

/**************************************
Deskripsi : Mengurutkan array dari elemen ke-1 hingga akhir menggunakan metode insertion sort
IS : Array telah berisi nilai
FS : Array telah terurut

Dibuat oleh :
Nama 	: Diaz Adha Asri Prakoso
Tanggal : 25 Mei 2019
***************************************/

void insertion_sort (int a, int A[100]);

void main (void)
//KAMUS
{	int x;
	int A[11] = {999, -5, 2, 16, 23, 44, 68, 71, 90, 101, 150, -9999};

//ALGORITMA
	printf ("******************************************* \n");
	printf ("Program SORTING Insertion Sort Best Case \n");
	printf ("******************************************* \n");
	printf ("Isi array sebelum terurut adalah : ");
	printf ("\n");
	for (x=1;x<=10;x++)
	{
		printf ("A[%d] = %d\n", x, A[x]);
	}
	printf ("\n\n***************** \n");
	printf ("Proses pengurutan \n");
	printf ("***************** \n\n");
	insertion_sort (10, &A);
	
	printf ("Isi array setelah terurut adalah : ");
	printf ("\n");
	for (x=1;x<=10;x++)
	{
		printf ("A[%d] = %d\n", x, A[x]);
	}
}

void insertion_sort (int a, int A[100])
{//KAMUS
	int ind_awal, ind_akhir, i, i2, temp, iterasi_luar, iterasi_dalam, x;
	
	ind_awal = 1;
	ind_akhir = a;
	iterasi_dalam = 0;
	iterasi_luar = 0;
	i = 2;
	while (i<=ind_akhir)
	{
		i2 = i;
		while (i2>ind_awal && A[i2]<A[i2-1])
		{
			printf ("Bandingkan A[%d] = %d dengan A[%d] = %d\n", i2, A[i2], i2-1, A[i2-1]);
			temp = A[i2-1];
			A[i2-1] = A[i2];
			A[i2] = temp;
			//Isi array setelah ditukar
			for (x=1;x<=10;x++)
			{
				printf ("%d ", A[x]);
			}
			printf ("\n\n");
			i2 = i2 - 1;
			iterasi_dalam++;
		}
		i = i + 1;
		iterasi_luar++;
	}
	printf ("\n\n");
	printf ("*************** \n");
	printf ("Hasil iterasi : \n");
	printf ("*************** \n");
	printf ("Iterasi Luar : %d\n", iterasi_luar);
	printf ("Iterasi Dalam : %d\n", iterasi_dalam);
}
