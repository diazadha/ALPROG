#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**********************
Program S(n)
Deskripsi : Menghitung bilangan ke-n pangkat tiga lalu dijumlahkan (n-1)^3 sampai 1^3
IS : Bilangan ke-n sudah diinput
FS : Hasil ditemukan

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 8 July 2019
*************************/

//header function
int sn (int n);
void main (void)

//KAMUS
{	int i, n, hasil;

	printf ("Masukkan nilai n : ");
	scanf ("%d", &n);
	
	printf ("Anda akan menghitung \n");
	printf ("S(%d) = ", n);
	for (i=1;i<=n;i++)
	{
		printf (" %d^3 +",i);
	}
	printf ("\n\n");
	hasil = sn (n);
	printf ("Hasilnya adalah %d\n", hasil);
	system ("PAUSE");
}

int sn (int n)
{
	if (n==1)
	{
		return n; //basis
	}
	else
	{
		return pow(n, 3) + sn(n-1); //rekurens
	}
} 
