#include <iostream>
#define garis "---------------------"
using namespace std;

int main() {
	int pil, A, B, C;  float a, b, c; string nama;
char ulang;
	do {
	cout << "Kalkulator \n";
	cout << garis << "\n \n";
	cout << "Masukkan Nama Anda : "; cin >> nama; 
	cout << "1. Penjumlahan \n";
	cout << "2. Pengurangan \n";
	cout << "3. Perkalian \n";
	cout << "4. Pembagian \n";
	cout << "5. Modulus \n \n";
	cout << garis << endl;
	cout << "Silahkan " << nama << " masukkan pilihan Anda (1 - 5) : "; cin >> pil;

	switch (pil){
		case 1 : {
			cout << "Penjumlahan : \n";
			cout << "Masukkan Nilai 1 : "; cin >> a;
			cout << "Masukkan Nilai 2 : "; cin >> b;
			c = a + b;
			cout << "Hasil dari penjumlahan "<<nama<< " adalah " << a << " + " << b << " = " << c << endl;
			cout<<endl<<"Apakah anda mau coba lagi? (Y/T)? ";cin>>ulang;
			break;	
		}
		case 2 : {
			cout << "Pengurangan : \n";
			cout << "Masukkan Nilai 1 : "; cin >> a;
			cout << "Masukkan Nilai 2 : "; cin >> b;
			c = a - b;
			cout <<"Hasil dari pengurangan "<<nama<< " adalah "<< a << " - " << b << " = " << c << endl;
			cout<<endl<<"Apakah anda mau coba lagi? (Y/T)? ";cin>>ulang;
			break;
		}
		case 3 : {
			cout << "Perkalian : \n";
			cout << "Masukkan Nilai 1 : "; cin >> a;
			cout << "Masukkan Nilai 2 : "; cin >> b;
			c = a * b;
			cout <<"Hasil dari perkalian "<<nama<< " adalah "<< a << " x " << b << " = " << c << endl;
			cout<<endl<<"Apakah anda mau coba lagi? (Y/T)? ";cin>>ulang;
			break;
		}
		case 4 : {
			cout << "Pembagian : \n";
			cout << "Masukkan Nilai 1 : "; cin >> a;
			cout << "Masukkan Nilai 2 : "; cin >> b;
			c = a / b;
			cout <<"Hasil dari pembagian "<<nama<< " adalah "<< a << " : " << b << " = " << c << endl;
			cout<<endl<<"Apakah anda mau coba lagi? (Y/T)? ";cin>>ulang;
			break;
		}
		case 5 : {
			cout << "Modulus : \n"; //Modulus tidak bisa memakai float
			cout << "Masukkan Nilai 1 : "; cin >> A;
			cout << "Masukkan Nilai 2 : "; cin >> B;
			C = A % B;
			cout <<"Hasil dari modulus "<<nama<< " adalah "<< A << " mod " << B << " = " << C << endl;
			cout<<endl<<"Apakah anda mau coba lagi? (Y/T)? ";cin>>ulang;
			break;
		}
	}
}
while (ulang == 'y' || ulang == 'Y');
return 0;
}



