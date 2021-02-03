#include <stdio.h>
#include <stdlib.h>

/*******************
Program Sekuensial_acak_urut
Deskripsi : Mencari sebuah nilai pada array secara sekuensial urut
IS : Array telah berisi nilai
FS : (1) Nilai tersebut ditemukan, outputnya = indeks elemen yang ditemukan
	(2) Nilai, tersebut tidak ditemukan, pncarian telah sampai pada akhir elemen, outputnya = -1

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 21 April 2019
*********************/

//header procedure
void Searching_Sekuensial_Urut(int n, int N, int acak[10], int *indeks);

void main (void)

//kamus
{
	int acak[10001];
	int cari, i, indeks, n, a, b, temp;
	
//ALgoritma program utama ****************
	printf ("Program Pencarian Sekuensial \n");
	printf ("**************************** \n");
	
//Menampilkan isi array dulu
	printf ("Isi array adalah ..... \n");
	
	printf ("Masukkan jumlah array : ");
	scanf ("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		acak[i] = rand() % n;
		printf ("A[%d] = %d \n",i, acak[i]);
	}
	
	for (a=1; a<=n; a++)
	{
		for (b=a+1; b <=n; b++)
		{
			if(acak[a]>acak[b])
			{
				temp = acak[b];
				acak[b] = acak[a];
				acak[a] = temp;
			}
		}
	}
	printf ("\nData setelah diurut : \n");
	for (a=1; a<=n; a++)
	{
		printf ("A[%d] = %d\n", a, acak[a]);
	}
	
	printf ("\n Masukkan Nilai yang dicari = ");
	scanf ("%d", &cari);
	
	Searching_Sekuensial_Urut(n, cari, acak, &indeks);
	
	if (indeks != -1)
	{
		printf ("Nilai %d ditemukan pada indeks yang ke- %d", cari, indeks);
	}
	else //indeks == -1
	{
		printf ("Nilai %d tidak ditemukan", cari);
	}
	
	printf ("\n\n");
	system ("PAUSE");
}

void Searching_Sekuensial_Urut(int n, int N, int acak[10],int *indeks)

//Mencari sebuah nilai pada array secara sekuensial
// IS : Array telah berisi nilai
// FS : (1) Nilai tersebut ditemukan, outputnya = indeks elemen yang ditemukan
//		(2) Nilai, tersebut tidak ditemukan, pencarian telah sampai pada akhir elemen, outputnya = -1

//KAMUS
{
	int i;
	i = 1;
	while (i<=n && acak[i]< N)
	{
		i = i + 1;
	}
	//i>n || A[i]>=N
	
	if (acak[i]!=N)
	{
		*indeks = -1; //Nilai cari tidak ditemukan
	}
	else //acak[i] == N
	{
		*indeks = i; //Nilai cari ditemukan
	}
}
