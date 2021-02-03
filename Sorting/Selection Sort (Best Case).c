#include <stdio.h>
#include <stdlib.h>
/*********
/*****************************************************************************
Program Sorting
Deskripsi : Mengurutkan array A dengan berbagai metode Sorting
IS : Array A telah berisi nilai sembarang
FS : Array A terurut
Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 28 Mei 2019
******************************************************************************/


//header procedure
void selectionsort (int akhirtakterurut, int A[11]);

main (void)

{	//KAMUS
	int A[11] = {999, -5, 2, 16, 23, 44, 68, 71, 90, 101, 150, -9999};
	int i;
	//ALGORITMA
	printf ("******************************************* \n");
	printf ("Program SORTING Selection Sort Best Case \n");
	printf ("******************************************* \n");
	
	//Menampilkan isi array 
	
	printf ("isi array awal : \n");
	for (i=1;i<=10;i++)
	{
		printf ("A[%d] = %d\n",i, A[i]);
	}
	printf ("\n\n***************** \n");
	printf ("Proses pengurutan \n");
	printf ("***************** \n\n");
	//Mengurutkan dengan selection sort
	selectionsort (10, A);
	
	//Menampilkan isi array 
	
	printf ("Setelah diurut : \n");
	for (i=1;i<=10;i++)
	{
		printf ("A[%d] = %d\n",i, A[i]);
	}
	
	
	printf ("\n\n");
	system ("PAUSE");
}

void selectionsort (int akhirtakterurut, int A[11])
{
	// Deskripsi : Mengurutkan array A dari elemen ke-1 hingga ke-AkhirTakTerurut                 
	//             secara ascending dengan metode Selection Sort
	// IS : Array A telah berisi nilai sembarang
	// FS : Array A terurut
	// Dibuat oleh : Diaz Adha Asri Prakoso
	// Tanggal : 28 Mei 2019
	int aw, ak, i, j, indeks, MAX, iterasi_luar, iterasi_dalam, temp;
     
     
     ak = akhirtakterurut;
     iterasi_luar = 0;
     iterasi_dalam = 0;
     while (ak >= 2)      //Lakukan pengulangan hingga tinggal 2 elemen
     {
           printf ("Sekarang mencari nilai yang tepat untuk lokasi terbelakang A[%d] \n", ak);
           //Cari MAX di ruang yang belum terurut, yaitu dari aw hingga ak
           aw = 1;
           MAX = aw;   //MAX diisi oleh nilai array pertama 
           printf ("Mula-mula MAX[%d] = %d \n", aw, A[MAX]);
           aw = aw + 1;    //mulai bandingkan dengan elemen ke 2
           while (aw <= ak)
           {
                 //bandingkan MAX dan A[i]                 
                 if (A[aw] > A[MAX])
                 {
                     MAX = aw;
                    iterasi_dalam++;
                 };
                 
                 printf ("Banding dg elemen ke-%d : MAX = A[%d] = %d \n", aw, MAX, A[MAX]);
                 aw++;
                
           }
           printf ("\n");
           
           //Taruh nilai MAX di akhir array yang belum terurut
           temp = A[ak];
           A[ak] = A[MAX];
           A[MAX] = temp;
           
          for (i=1; i<=10; i++)
          {
              printf ("%d  ", A[i]);
          }
          printf ("\n");
           
           iterasi_luar++;
           ak = ak - 1;
     }
	
	printf ("\n\n");
	printf ("*************** \n");
	printf ("Hasil iterasi : \n");
	printf ("*************** \n");
	
	printf ("Iterasi Luar : %d\n", iterasi_luar);
	printf ("Iterasi Dalam : %d\n", iterasi_dalam);
}
