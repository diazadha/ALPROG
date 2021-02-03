#include <stdio.h>
#include <stdlib.h>
/*********
Program Sorting
Deskripsi : Mengurutkan array A dengan berbagai metode Sorting
IS : Array A telah berisi nilai sembarang
FS : Array A terurut
Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 28 Mei 2019
*********/

//header procedure
void bubblesort (int akhirtakterurut, int A[11]);

main (void)

{	//KAMUS
	int A[11] = {999, -5, 2, 16, 23, 44, 68, 71, 90, 101, 150, -9999};
	int i;
	//ALGORITMA
	printf ("**************************************** \n");
	printf ("Program SORTING Bubble Sort Best Case \n");
	printf ("**************************************** \n");
	
	//Menampilkan isi array 
	
	printf ("isi array awal : \n");
	for (i=1;i<=10;i++)
	{
		printf ("A[%d] = %d\n",i, A[i]);
	}
	printf ("\n\n***************** \n");
	printf ("Proses pengurutan \n");
	printf ("***************** \n\n");
	//Mengurutkan dengan bubble sort
	bubblesort (10, A);
	
	//Menampilkan isi array 
	
	printf ("Array setelah diurut : \n");
	for (i=1;i<=10;i++)
	{
		printf ("A[%d] = %d\n",i, A[i]);
	}
	
	
	printf ("\n\n");
	system ("PAUSE");
}

void bubblesort (int akhirtakterurut, int A[11])
{
	int Aw, Ak, i, j, temp, iterasi_luar, iterasi_dalam;
	// Deskripsi : Mengurutkan array A dari elemen ke-1 hingga ke-AkhirTakTerurut                 
	//             secara ascending dengan metode Bubble Sort
	// IS : Array A telah berisi nilai sembarang
	// FS : Array A terurut
	// Dibuat oleh : Diaz Adha Asri Prakoso
	// Tanggal : 28 Mei 2019
	//algoritma
	
	Aw = 1;
	Ak = akhirtakterurut;
	iterasi_luar = 0;
	iterasi_dalam = 0;
	while (Ak>=2)
	{
		printf ("---->Cari nilai yang tepat untuk lokasi terbelakang A[%d] \n", Ak);
		//Periksa urutan bilangan yang bertetangga
		i = Aw;
		j = i + 1; //j adalah tetangga
		while (j<=Ak)
		{
			printf ("Bandingkan A[%d] = %d dan A[%d] = %d", i, A[i], j, A[j]);
			if (A[i]>A[j])
			{
				printf ("--->Tukar\n");
				//swap
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
				iterasi_dalam = iterasi_dalam + 1;
				//tampilkan array saat ini
				for (i=1;i<=10;i++)
				{
					printf ("%d ", A[i]);
				}
				printf ("\n\n");
			}
			else
			{
				 printf ("--->Sudah benar urutannya, maka biarkan saja\n\n");
			}			
			i = j;
			j = i + 1;
			
		}
		Ak = Ak - 1;
		iterasi_luar = iterasi_luar + 1;
	}
	printf ("\n\n");
	printf ("*************** \n");
	printf ("Hasil iterasi : \n");
	printf ("*************** \n");
	
	printf ("Iterasi Luar : %d\n", iterasi_luar);
	printf ("Iterasi Dalam : %d\n\n", iterasi_dalam);
}
