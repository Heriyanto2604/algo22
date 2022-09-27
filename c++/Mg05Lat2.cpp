#include <iostream>
using namespace std;
#define garis "-------------------------------"

int main() {
	
	float  a,t,l;
	
	cout<<"Rumus Mencari Luas Segitiga"<<endl;
	cout<<garis<<endl;
	cout<<"Masukkan Alas Segitiga :";cin>>a;
	cout<<"Masukkan Tinggi Segitiga :";cin>>t;
	l=(a*t)/2;
	cout<<"Hasil Dari Luas Segitiga Yang Kamu Input Adalah : "<<l;
	return 0;
}
