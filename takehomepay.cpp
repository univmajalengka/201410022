#include <iostream>
#include <string>
//Deklarasi konstanta
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main()
{
	//Deklarasi Variabel
	int gajibersih, gajipokok, pajak, tunjangan;
	std::string namakaryawan;
	
	//Input Nama Karyawan
	std::cout<<"Masukkan Nama Karyawan : ";
	getline(std::cin, namakaryawan);
	
	//Input Gaji Pokok
	std::cout<<" Gaji Pokok : Rp. ";
	std::cin>>gajipokok;
	
	//Penghitungan atau Prosesnya
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	//Tampilan Komisinya
	std::cout<<"Nama Karyawan : "<<namakaryawan<<std::endl;
	std::cout<<"Besar Tunjangannya : Rp. "<<tunjangan<<std::endl;
	std::cout<<"Besar Pajaknya : Rp. "<<pajak<<std::endl;
	std::cout<<"Besar Gaji Bersihnya : Rp. "<<gajibersih<<std::endl;
	return 0;
	}
