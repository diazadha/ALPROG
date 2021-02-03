#include <stdlib.h>
#include <stdio.h>
#include "header_sorting.h"
#include "prosedur_sorting_bubble.h"
#include "prosedur_sorting_selection.c"

/*****************************************************************************
Program Sorting
Deskripsi : Mengurutkan array A dengan berbagai metode Sorting
IS : Array A telah berisi nilai sembarang
FS : Array A terurut
Dibuat oleh : Winangsari
Tanggal : 4 April 2016
******************************************************************************/

int main ()

// KAMUS **************
{  
  int A[ArraySize-1];    //A array acak
  int i;

  
//ALGORITMA PROGRAM UTAMA **********    
  printf ("***************************************************** \n");
  printf ("Program SORTING - BUBBLE SORT dan SELECTION SORT \n");
  printf ("***************************************************** \n\n");

  // Mengisi array dengan bilangan random 
  printf ("Isi Array A (acak) Mula-mula adalah ..... \n");
  for (i=1; i<=ArraySize-1; i++)
  {
      A[i] = rand() % 1000;    //random antara 0 - 999
      printf ("%d  ", A[i]);
  }
  printf ("\n\n");
  
	BubbleSort (ArraySize-1, A);
	SelectionSort (ArraySize-1, A);
  
  
  printf ("******** Hasil Akhir sorting *********** \n");
  for (i=1; i<=ArraySize-1; i++)
  {
      printf ("%d  ", A[i]);
  }
  printf ("\n\n");
    
  system ("pause");
}


