#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***********************************************
Program Node
Deskripsi : Mengetahui nama tetangga ke-2 dari N, Mengetahui bobot dari node N itu sendiri, mengetahui nama kedua tetangga dari tetangga ke-1 dari N
IS : Membuat tipe bentukan untuk masing masing node dan menjawab soal tersebut
FS : Soal terjawab

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 1 Juli 2019
********************************************/

void main (void)

{ //KAMUS
	typedef struct
		{
			char nama;
			int bobot;
	  		struct Node * tetangga1;
			struct Node * tetangga2;}Node;
	Node N, tetangga1, tetangga2;

	//ALGORITMA
	printf ("a) Bagaimana caranya mengetahui nama tetangga ke-2 dari N?\n");
	tetangga2.nama= 'i';
	printf ("   tetangga2.nama : \n");
	printf ("   Nama tetangga ke- 2 dari N adalah : %c\n\n", tetangga2.nama);
	
	printf ("b) Bagaimana caranya mengetahui bobot dari Node N itu sendiri?\n");
	N.bobot = 25;
	printf ("   N.bobot : \n");
	printf ("   Bobot dari Node N adalah : %d\n\n", N.bobot);
	
	printf ("c) Bagaimana caranya mengetahui nama kedua tetangga dari tetangga ke-1 dari N?\n");
	tetangga1.tetangga2 = 'A';
	printf ("   tetangga1.tetangga2 : \n");
	printf ("   Nama kedua tetangga dari tetangga ke-1 : %c\n\n", tetangga1.tetangga2);
	
	system ("PAUSE");
}
