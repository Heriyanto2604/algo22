#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Nilai A :"; cin>>a;
	switch (a){
		case 1 : cout<<"Satu"; break;
		case 2 : cout<<"Dua"; break;
		case 3 : cout<<"Empat"; break;
		default : cout<<"Nor 1 or 2";
		//tanpa break, semuanya nanti keluar, jadi harus ada break buat berhenti
		//case hanya bisa untuk 2 tipe data, int dan char
		//kalau char, harus pakai petik 1. contoh nya a, berati 'a'
	}
	return 0;
}
