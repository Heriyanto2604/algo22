#include <iostream>
using namespace std;

int main(){
	string nama; 
	int tgs, UTS, UAS, total;
	cout << "Masukkan Nama anda   : "; cin >> nama;
	cout << "Masukkan Nilai Tugas : "; cin >> tgs;
	cout << "Masukkan Nilai UTS   : "; cin >> UTS;
	cout << "Masukkan Nilai UAS   : "; cin >> UAS;
	cout << "-------------------------"<<endl;
	cout << "Selamat " << nama << endl;
	total = (tgs + UTS + UAS)/3;
	cout << "Nilai Kamu (Tugas + UTS + UAS)/3 : " << total <<endl ;
	
	switch (total){
		case 0 ... 20 : {
			cout << "Nilai Huruf Anda : E "<<endl;
			cout << "Predikat Anda 	  : Sangat Kurang "<<endl;
			break;
		}
		case 21 ... 40 : {
			cout << "Nilai Huruf Anda : D "<<endl;
			cout << "Predikat Anda 	  : Kurang "<<endl;
			break;
		}
		case 41 ... 60 : {
			cout << "Nilai Huruf Anda : C "<<endl;
			cout << "Predikat Anda    : Cukup "<<endl;
			break;
		}
		case 61 ... 80 : {
			cout << "Nilai Huruf Anda : B "<<endl;
			cout << "Predikat Anda 	  : Baik "<<endl;
			break;
		}
		case 81 ... 100 : {
			cout << "Nilai Huruf Anda : A "<<endl;
			cout << "Predikat Anda    : Sangat Baik "<<endl;
			break;
		}
		default : cout << "Nilai yang anda input salah, sehingga terjadi Error! ";
		break;
	}
}
