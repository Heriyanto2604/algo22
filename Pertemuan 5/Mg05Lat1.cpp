#include <iostream>
using namespace std;
#define garis "-------------------------------------"

int main() {
	
	double p, l, L;
	
	cout<<"Aplikasi Mencari Luas Persegi Panjang"<<endl;
	cout<<garis<<endl;
	cout<<"Masukkan Panjang Persegi Panjang :";cin>>p;
	cout<<"Masukkan Lebar Persegi Panjang :";cin>>l;
	L=p*l;
	cout<<"Hasil Dari Luas Persegi Panjang Yang Kamu Masukkan adalah :"<<L;
	return 0;
}
