#include <iostream>
const int biaya = 100;
int main()
{
	//Deklarasi Variabel
	int satuanpulsa, totalbiaya, lamapercakapan, sisapercakapan;
	//membuat tipe data baru (Jam) j,m,d kemudian dideklarasian pada var waktu
	typedef struct {
	int j;
	int m;
	int d;	
	}Jam;
	Jam waktu;
	
	//inputan lama percakapan
	std::cout<<"Masukkan Lama Percakapan (dalam detik) : ";
	std::cin>>lamapercakapan;
	//perhitungan biaya
	satuanpulsa = lamapercakapan / 5;
	totalbiaya = satuanpulsa * biaya;
	//konversi ke j,m,d
	waktu.j=lamapercakapan/3600;
	sisapercakapan=lamapercakapan%3600;
	waktu.m=sisapercakapan/60;
	waktu.d=sisapercakapan%60;
	//tampilan akhir
	std::cout<<"Total Biaya : "<<totalbiaya<<std::endl;
	std::cout<<"Lama Percakapan : "<<waktu.j<<" Jam "<<waktu.m<<" Menit "<<waktu.d<<" Detik "<<std::endl;
	return 0;
}
