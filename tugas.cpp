#include<iostream>
using namespace std;
int main()
{
	cout<<"Pilih Menu :"<<endl;
	cout<<"1.Pertambahan"<<endl;
	cout<<"2.Pengurangan"<<endl;
	cout<<"3.Perkalian"<<endl;
	cout<<"4.Pembagian"<<endl;
	cout<<"Sisa Hasil Bagi"<<endl;
	int a,b,c menu;
	float d,e,f;
	cin>>menu;
	if(menu==1){
		cin>>a;
		cin>>b;
		c=a+b;
		cout<<c;
	}else if(menu==2){
		cin>>a;
		cin>>b;
		c=a-b;
		cout<<c;
	}else{
		cout<<"Menu Tidak Ada";
	}
	return false;
}