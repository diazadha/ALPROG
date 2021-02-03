void BubbleSort (int AkhirTakTerurut, int A[ArraySize-1])

// Deskripsi : Mengurutkan array A dari elemen ke-1 hingga ke-AkhirTakTerurut                 
//             secara ascending dengan metode Bubble Sort
// IS : Array A telah berisi nilai sembarang
// FS : Array A terurut
// Dibuat oleh : Winangsari
// Tanggal : 4 April 2016

{
     int aw, ak, i, j, temp;
     
     printf ("\n********************** BUBBLE SORT **********************\n\n");
     aw = 1;
     ak = AkhirTakTerurut;
     while (ak >= 2)
     {
           printf ("***Sekarang cari nilai yang tepat untuk lokasi terbelakang A[%d] \n", ak);
           i = aw;
           j = i + 1;
           while (j <= ak)
           {
                 printf ("bandingkan A[%d]=%d dan A[%d]=%d ", i, A[i], j, A[j]);
                 if (A[i] > A[j])
                 {
                      printf ("----> Tukar....\n");
                      temp = A[i];
                      A[i] = A[j];
                      A[j] = temp;
                      
                      //Tampilkan urutan array saat ini
                      for (i=1; i<=ArraySize-1; i++)
                      {
                          printf ("%d  ", A[i]);
                      }
                      printf ("\n\n");

                 }
                 else 
                      printf ("----> Sudah benar urutannya, biarkan....\n\n");
                                 
                 i = j;
                 j = i + 1;
                 
           }
           ak = ak - 1;
           printf ("\n");
     }
}

