#include <stdio.h>
#include <stdlib.h>

void main (void)

{	typedef struct
		{
			int bag1;
			int bag2;
			int bag3;
			int bag4;}IP;
	typedef char String5[6];
	typedef char String140[141];
	typedef struct
		{
			struct IP * AlamatIPSumber;
			struct IP * AlamatIPTujuan;
			char IdPesan[6];
			int NomorUrutPaket;
			char IsiPaket[141];}PaketData;
		
	PaketData P, AlamatIPSumber;
	
	printf ("a) Bagaimana caranya mengetahui ID pesan yang dibawa oleh P?\n");
	P.IdPesan = 's';
	printf ("   P.IdPesan : \n");
	printf ("   ID pesan yang dibawa oleh P adalah : %s\n\n", P.IdPesan);
	
	printf ("b) Bagaimana caranya mengetahui no urut dan isi pesan yang dibawa oleh P?\n");
	P.NomorUrutPaket = 15;
	P.IsiPaket = Haiiapakabarrr
	printf ("   P.NomorUrutPaket : \n");
	printf ("   P.IsiPaket : \n");
	printf ("   No urut adalah : %d\n\n", P.NomorUrutPaket);
	printf ("   Isi pesan adalah : %s\n\n", P.IsiPaket);
	
	printf ("c) Bagaimana caranya mengetahui bagian pertama dari alamat IP sumber?\n");
	AlamatIPSumber.IP.bag1 = 25;
	printf ("   Bagian pertama dari alamat IP sumber adalah %d\n", AlamatIPSumber.bag1)l
}
