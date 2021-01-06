//konversi jam menit detik ke total detik
//konversi total detik ke jam menit dan detik
//mencari perbedaan dari 2 buah jam (program billing telepon / warnet)
#include<iostream>
using namespace std;
int function_totaldetik(int j, int m, int d);
int function_waktu (int td);
void tampil (int show);
int main()
{
	cout<<"-- Program Function Konversi Total Detik --"<<endl;
	int td, waktu, a, b, c, d;
	td=function_totaldetik(a, b, c);
	tampil(td);
	waktu=function_waktu(td);
	return 0;
}
//function mencari total detik
int function_totaldetik(int j, int m, int d){
	int td;
	cout<<">> Konversi Jam Menit Detik Ke Total Detik <<"<<endl;
	cout<<"Masukan waktu"<<endl;
	cout<<"Jam = ";cin>>j;
	cout<<"Menit = ";cin>>m;
	cout<<"Detik = ";cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik =";
	return td;
}
//function konversi total detik
int function_waktu(int td)
{
	int j, m, sm, d;
	cout<<endl;
	cout<<">> Konversi total detik ke jam, menit, detik <<"<<endl;
	cout<<"Masukan total detik :";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"waktu Awalnya ="<<j<<";"<<m<<";"<<d;
	return 0;
}
void tampil (int show)
{
	cout<<show;
}
