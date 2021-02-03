#include "header_sorting.h"

void SelectionSort (int AkhirTakTerurut, int A[ArraySize-1])

// Deskripsi : Mengurutkan array A dari elemen ke-1 hingga ke-AkhirTakTerurut                 
//               secara ascending dengan metode Selection Sort
// IS : Array A telah berisi nilai sembarang
// FS : Array A terurut
// Dibuat oleh : Winangsari
// Tanggal : 4 April 2016

{
     int aw, ak, i, j, indeks, MAX;

     printf ("\n********************* SELECTION SORT ********************\n\n");     
     aw = 1;
     ak = AkhirTakTerurut;
     while (ak >= 2)      //Lakukan pengulangan hingga tinggal 2 elemen
     {
           printf ("Sekarang mencari nilai yang tepat untuk lokasi terbelakang A[%d] \n", ak);
           //Cari MAX di ruang yang belum terurut, yaitu dari aw hingga ak
           MAX = A[aw];   //MAX diisi oleh nilai array pertama 
           printf ("Mula-mula MAX[%d] = %d \n", aw, MAX);
           i = aw + 1;    //mulai bandingkan dengan elemen ke 2
           while (i <= ak)
           {
                 //bandingkan MAX dan A[i]                 
                 if (A[i] > MAX)
                 {
                     MAX = A[i];
                     indeks = i;
                 };
                 
                 printf ("Banding dg elemen ke-%d : MAX = A[%d] = %d \n", i, indeks, MAX);
                 i++;
           }
           printf ("\n");
           
           //Taruh nilai MAX di akhir array yang belum terurut
           A[indeks] = A[ak];
           A[ak] = MAX;
           
          for (i=1; i<=ArraySize-1; i++)
          {
              printf ("%d  ", A[i]);
          }
          printf ("\n");
           
           
           ak = ak - 1;
     }
}

