#include <stdio.h>
#include <stdlib.h>

/*******************
Program Binary_search
Deskripsi : Mencari sebuah nilai pada array secara binary search
IS : Array telah berisi nilai
FS : (1) Nilai tersebut ditemukan, outputnya = indeks elemen yang ditemukan
	(2) Nilai, tersebut tidak ditemukan, pencarian telah sampai pada akhir elemen, outputnya = -1

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 21 April 2019
*********************/

//procedure untuk mencari angka dengan pencarian bagi dua 
void biner ( int cari ,int n , int angka[], int *c, int *Temu)
{
    //kamus
    int akhir ,awal ,tengah, i, ketemu;
   
    akhir = n; 
	awal = 0; 
	ketemu = -1; 
	i = 1;
    //Perulangan untuk mencari angka nya dengan kondisi ketemu = -1 dan i <= n
    while ( ketemu == -1 && i <=n )
    {   
    	tengah = ( awal + akhir ) / 2;
           
        if ( angka[tengah] == cari )
        {
            ketemu = tengah;
        }
        else //angka[tengah] != cari
        {
            if ( angka[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else //angka[tengah] >= cari
            {
                akhir = tengah - 1;
            }
        }
		i++;
    } //ketemu!=1 || i>n
    *c = i;
    *Temu = ketemu;
}

int main ()
{	//kamus
    int cari , i , n, a, b, temp, c, Temu;
    int angka[10001];

    printf("Berapa data yg ingin di tampilkan secara acak  : ");
    scanf("%d" , &n);

    printf("\nInput angka secara terurut menaik\n");
    for (i = 1; i <=n; i++)
    {
        angka[i] = rand() % n;
		printf("A[%d] = %d\n ", i, angka[i]);
    }
	
	for (a=1; a<=n; a++)
	{
		for (b=a+1; b <=n; b++)
		{
			if(angka[a]>angka[b])
			{
				temp = angka[b];
				angka[b] = angka[a];
				angka[a] = temp;
			}
		}
	}
	printf ("\nData setelah diurut : \n");
	for (a=1; a<=n; a++)
	{
		printf ("A[%d] = %d\n", a, angka[a]);
	}
	
    printf("Berapa angka yg ingin dicari: ");
    scanf("%d", &cari);

    biner ( cari , n , angka, &c, &Temu);

    if  ( Temu == - 1 )
    {
        printf("\nData tidak ditemukan !! \n");
    }
    else //Temu != -1
    {
        printf("\nAngka %d ditemukan di indeks %d\n", cari, Temu);
    }
    printf ("Nilai i = %d", c);

    return 0;
}
