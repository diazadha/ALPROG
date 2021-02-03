#include <stdio.h>
#include <stdlib.h>

/***********
**********/

//header procedure
void Searching_Sekuensial_Urut(int N, int A[13], int *indeks);

void main (void)

//kamus
{
	int A[13] = {999, -43, -30, -15, -9, -1, 27, 33, 49, 55, 60, 98, 103};
	int cari, i, indeks;
	
//ALgoritma program utama ****************
	printf ("Program Pencarian Sekuensial \n");
	printf ("**************************** \n");
	
//Menampilkan isi array dulu
	printf ("Isi array adalah ..... \n");
	
	for (i=1; i<=12; i++)
	{
		printf ("A[%d] = %d \n",i, A[i]);
	}
	printf ("\n Masukkan Nilai yang dicari = ");
	scanf ("%d", &cari);
	
	Searching_Sekuensial_Urut(cari, A, &indeks);
	
	if (indeks != -1)
	{
		printf ("Nilai %d ditemukan pada indeks yang ke- %d", cari, indeks);
	}
	else
	{
		printf ("Nilai %d tidak ditemukan", cari);
	}
	
	printf ("\n\n");
	system ("PAUSE");
}

void Searching_Sekuensial_Urut(int N, int A[13],int *indeks)

//Mencari sebuah nilai pada array secara sekuensial
// IS : Array telah berisi nilai
// FS : (1) Nilai tersebut ditemukan, outputnya = indeks elemen yang ditemukan
//		(2) Nilai, tersebut tidak ditemukan, pncarian telah sampai pada akhir elemen, outputnya = -1

//KAMUS
{
	int i;
	i = 1;
	while (i<=12 && A[i]< N)
	{
		i = i + 1;
	}
	//i>12 || A[i]>=N
	
	if (A[i]!=N)
	{
		*indeks = -1; //Nilai cari tidak ditemukan
	}
	else
	{
		*indeks = i; //Nilai cari ditemukan
	}
}
