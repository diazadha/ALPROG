#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***************************
Algoritma Titik_Koordinat_Cartesius
{	Deskripsi : Menentukan kuadran sebuah titik menggeser titik; menghitung jarak 2 titik
	IS : Pengguna siap memasukkan data koordinat titik; data translasi; data koordinat 2 titik
	FS : Kuadran; Titik baru hasil geser; Jarak 2 titik
		 Ketentuan :
		 
		 (1) Kuadran
		 		- Jika x>0 dan y>0 maka titik P berada pada kuadran 1
		 		- Jika x<0 dan y>0 maka titik P berada pada kuadran 2
		 		- Jika x<0 dan y<0 maka titik P berada pada kuadran 3
		 		- Jika x>0 dan y<0 maka titik P berada pada kuadran 4
		(2) Jika titik P digeser secara horizontal n satuan dan secara vertikal m satuan
			maka koordinat titik P sekarang adalah (x+n, y+m)
		(3) Jika diketahui terdapat titik Q(x1, y1), hitunglah jarak P ke Q dengan rumus jarak :
			Jarak PQ = akar dari (x1-x) kuadrat ditambah (y1-y) kuadrat 
		
	Dibuat oleh : Diaz Adha Asri Prakoso
	Tanggal : 24 Juni 2019 }
********************************/

void main (void)

{ //KAMUS
	int  Jarak, xP, yP, xPP, yPP, m, n, xQ, yQ;
	typedef struct 
		{	float x;
			float y;}Titik;
	Titik P, PP, Q;
	
	int total_x;
	int total_y;
	//ALGORITMA
	printf ("********************\n");
	printf ("1)Menentukan kuadran\n");
	printf ("********************\n");
	
	printf ("Masukkan nilai P.x : ");
	scanf ("%f", &P.x);
	printf ("Masukkan nilai P.y : ");
	scanf ("%f", &P.y);
	
	if (P.x >= 0)
	{
		if (P.y>=0)
		{
			printf ("Titik P berada di kuadran 1\n");
		}
		else
		{
			printf ("Titik P berada di kuadran 4\n");
		}
	}
	else
	{
		if (P.y>=0)
		{
			printf ("Titik P berada di kuadran 2\n");
		}
		else
		{
			printf ("Titik P berada di kuadran 3\n");
		}
	}
	
	//Translasi (Pergeseran)
	printf ("************************\n");
	printf ("2)Translasi (Pergeseran)\n");
	printf ("************************\n");
	printf ("Masukkan nilai n : ");
	scanf ("%d", &n);
	printf ("Masukkan nilai m : ");
	scanf ("%d", &m);
	
	PP.x = P.x + n;
	PP.y = P.y + m;
	printf ("P bergeser ke titik %f dengan koordinat : %f \n", PP.x, PP.y);
	
	//Menghitung Jarak
	printf ("******************\n");
	printf ("3)Menghitung Jarak\n");
	printf ("******************\n");
	printf ("Masukkan nilai Q.x : ");
	scanf ("%f", &Q.x);
	printf ("Masukkan nilai Q.y : ");
	scanf ("%f", &Q.y);
	
	Jarak = sqrt (((Q.x-P.x) * (Q.x-P.x)) + ((Q.y-P.y) * (Q.y-P.y)));
	printf ("Jaraknya adalah : %f\n");
	
	system ("PAUSE");
}
