#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main (void)

{
//KAMUS
	int A[11] = {0,10,20,30,40,50,60,70,80,90,100};
	int i, jumlah;
	char B[11] = {'z','s','a','y','a','r','a','j','i','n','n'};
	int Baru[101];
	char* Nama[11] = {"x", "Adi", "Dida", "Yuri", "Tisha", "Tukul", "Dimas", "Bintang", "Darwis", "Izzi", "Qisty"};
	
//ALGORITMA*************

	//Menampilkan isi array ke layar
	printf ("Isi array A : ");
	printf ("\n");
	i = 1;
	while (i<=10)
	{
		printf ("A[%d] = %d\n", i, A[i]);
		i = i + 1;
	}
	printf ("\nIsi array B : ");
	printf ("\n");
	i = 1;
	while (i<=10)
	{
		printf ("B[%d] = %c\n", i, B[i]);
		i = i + 1;
	}
	printf ("\nIsi array nama : ");
	printf ("\n");
	i = 1;
	while (i<=10)
	{
		printf ("Nama[%d] = %s\n", i, Nama[i]);
		i = i + 1;
	}
	printf ("\n");
	//Menampilkan array A yang berindeks ganjil
	printf ("Isi array A yang berindeks ganjil: ");
	printf ("\n");
	i = 1;
	while (i<=10)
	{
		printf ("A[%d] = %d\n", i, A[i]);
		i = i + 2;
	}
	printf ("\n");
	//Menampilkan isi array A yang berindeks genap
	printf ("Isi array A yang berindeks genap: ");
	printf ("\n");
	i = 2;
	while (i<=10)
	{
		printf ("A[%d] = %d\n", i, A[i]);
		i = i + 2;
	}
	//Menampilkan isi array A yang kelipatan 3
	printf ("Isi array A yang kelipatan 3: ");
	printf ("\n");
	i = 3;
	while (i<=10)
	{
		printf ("A[%d] = %d\n", i, A[i]);
		i = i + 3;
	}
	//Mengisi array baru
	printf ("Silahkan isi array baru berikut: ");
	printf ("\n");
	i = 1;
	while (i<=100)
	{
		Baru[i] = rand() % 100;
		printf ("Baru[%d] = %d\n", i, Baru[i]);
		i = i + 1;
	}
	Baru [45] = -999;
	i = 1;
	while (Baru[i]!=-999)
	{
		printf ("Baru[%d] = %d\n", i, Baru[i]);
		i = i + 1;
	}
	i = 1;
	while (Baru[i]!=-999)
	{
		i = i + 1;
	}
	printf ("Sentinel berada di : %d\n", i);
	i = 1;
	jumlah = 0;
	while (Baru[i]<=100)
	{
		
		jumlah = jumlah + Baru[i];
		i = i + 1;
	}
	printf ("Jumlah isi array  : %d\n", jumlah);
	system ("PAUSE");
}
