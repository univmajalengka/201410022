#include <iostream>
using namespace std;
int main()
{
	int jumlahbelanja, jumlahbayar, diskon;
	cout<<"Jumlah Uang Yang Dibelanjakan : ";
	cin>>jumlahbelanja;
	
	//Jika Jumlah Uang Yang Dibelanjakan Rp 0 - Rp 25000 = Diskonnya 0%
	if ((jumlahbelanja>=0) && (jumlahbelanja<25000)){
		diskon=jumlahbelanja*0.0;
		jumlahbayar=jumlahbelanja-diskon;
		cout<<endl<<"Diskonnya 0%"<<endl;
	}
	
	//Jika Jumlah Uang Yang Dibelanjakan Rp 25000 - Rp 50000 = Diskonnya 10%
	else if ((jumlahbelanja>=25000) && (jumlahbelanja<50000)){
		diskon=jumlahbelanja*0.10;
		jumlahbayar=jumlahbelanja-diskon;
		cout<<endl<<"Diskonnya 10%"<<endl;
	}
	
	//Jika Jumlah Uang Yang Dibelanjakan Rp 50000 - Rp 100000 = Diskonnya 12,5%
	else if ((jumlahbelanja>=50000) && (jumlahbelanja<100000)){
		diskon=jumlahbelanja*0.125;
		jumlahbayar=jumlahbelanja-diskon;
		cout<<endl<<"Diskonnya 12,5%"<<endl;
	}
	
	//Jika Jumlah Uang Yang Dibelanjakan lebih dari Rp 100000 = Diskonnya 15%
	else if (jumlahbelanja>=100000){
		diskon=jumlahbelanja*0.15;
		jumlahbayar=jumlahbelanja-diskon;
		cout<<endl<<"Diskonnya 15%"<<endl;
	}
	cout<<endl<<"Jumlah Uang Yang dibayar = Rp. "<<jumlahbayar<<endl;
	return 0;
}
